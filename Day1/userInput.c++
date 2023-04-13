#include<iostream>
using namespace std;

int main(){
    int x;
    string name;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter your name: " ;
    getline(cin >>ws, name);
    cout << "You entered: " << x << endl;
    cout << "Your name is: " << name << endl;
}