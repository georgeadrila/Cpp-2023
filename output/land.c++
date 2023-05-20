#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class LandDivision {
public:
    LandDivision(string _type) : type(_type) {}
    virtual void calculate() = 0;
    virtual void display() = 0;
protected:
    string type;
};

class StraightDivision : public LandDivision {
public:
    StraightDivision(double _length, int _numLots) : LandDivision("Straight"), length(_length), numLots(_numLots) {}
    void calculate() override {
        lotSize = length / numLots;
    }
    void display() override {
        cout << "Type: " << type << endl;
        cout << "Length: " << length << endl;
        cout << "Number of lots: " << numLots << endl;
        cout << "Lot size: " << lotSize << endl;
    }
    double getLotSize() { return lotSize; }
private:
    double length;
    int numLots;
    double lotSize;
};

class CurveDivision : public LandDivision {
public:
    CurveDivision(double _length, double _radius) : LandDivision("Curve"), length(_length), radius(_radius) {}
    void calculate() override {
        arcLength = 2 * 3.14159 * radius * (length / (2 * 3.14159 * radius));
        lotSize = arcLength / 10;
    }
    void display() override {
        cout << "Type: " << type << endl;
        cout << "Length: " << length << endl;
        cout << "Radius: " << radius << endl;
        cout << "Arc length: " << arcLength << endl;
        cout << "Lot size: " << lotSize << endl;
    }
    double getLotSize() { return lotSize; }
private:
    double length;
    double radius;
    double arcLength;
    double lotSize;
};

int main() {
    // Get input from user
    double landSize, acreSize;
    cout << "Enter the size of the land in square feet: ";
    cin >> landSize;

    // Convert square feet to acres
    acreSize = landSize / 43560.0;
    cout << "The land size is " << acreSize << " acres." << endl;

    // Divide land into lots
    vector<LandDivision*> divisions;
    divisions.push_back(new StraightDivision(1000, 10));
    divisions.push_back(new CurveDivision(500, 200));

    for (auto division : divisions) {
        division->calculate();
        division->display();
        cout << endl;
    }

    // Draw image of land division
    Mat img = Mat::zeros(1000, 1000, CV_8UC3);
    int x = 0;
    for (auto division : divisions) {
        double lotSize = division->getLotSize() * 43560.0;
        int numLots = acreSize / lotSize;
        for (int i = 0; i < numLots; i++) {
            rectangle(img, Point(x, 0), Point(x + lotSize / acreSize * 1000, 1000), Scalar(255, 255, 255), -1);
            x += lotSize / acreSize * 1000;
        }
    }

    // Show image
    namedWindow("Land Division", WINDOW_NORMAL);
    imshow("Land Division", img);
    waitKey(0);

    return 0;
}

