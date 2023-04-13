#include<iostream>
using namespace std;

/// @brief usingnumber instead of int type
using  number = int;

int main(){
    number temp;

    cout << "Enter your body temperature";
    cin >> temp;

    (temp > 0 && temp < 79) ? cout << "You are alive" : cout << "You are dead";
}