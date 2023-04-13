#include<iostream>
using namespace std;

int main(){
    int grade = 90;

    cout << "Enter your grade: ";
    cin >> grade;

    (grade >= 90) ? cout << "You are worthy" : cout << "You donkey";
}