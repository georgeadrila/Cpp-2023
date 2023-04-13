#include<iostream>
using namespace std;


int main(){
    string name;

    cout << "Enter your name: ";
    getline(cin >>ws, name);


    name.empty() ? cout << "You are worthy" : cout << "You donkey";
    cout << name.length();


}