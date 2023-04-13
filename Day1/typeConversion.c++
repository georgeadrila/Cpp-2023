// converting one datatype to another. explicit type conversion

#include<iostream>
#include<string>
using namespace std;

int main(){
    double x = (int)10.99;
    cout << x << endl;

    // suppose we want to grade a student
    int correct = 8;
    int questions = 10;
    double grade = (double)correct / questions * 100 ;
    cout << grade << "%" << endl;
}