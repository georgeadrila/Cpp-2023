#include<iostream>
using namespace std;

using words = string;

int main(){
    words name;
    // repeats a block of code while a condition is true, can force user to do sth until they do it correctly
    do{
        cout << "Enter your name: ";
        getline(cin, name);
    } while(name.empty());

    cout << "Hello " << name << endl;
    return 0;
}