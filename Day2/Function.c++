// function is a block of reusable code that performs a specific task
#include<iostream>
using namespace std;

void happyBirthday(string name);

int main(){

    string name = "John";

    happyBirthday(name);
    
    return 0;
}

void happyBirthday(string name){
    cout << "Happy Birthday " << name << endl;
    
}