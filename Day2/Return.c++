#include<iostream>
using namespace std;

double square(double length);
double cube(double length);

int main(){
    // Return statement is used to return a value from a function

    double length = 10.5;
    double area = square(length);
    double volume = cube(length);
    cout << "Area of square is " << area << endl;
    cout << "Volume of cube is " << volume << endl;

    return 0;
}

double square(double length){
    double area = length * length;
    return area;
}

double cube(double length){
    double volume = length * length * length;
    return volume;
}