#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a, b, c;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    c = sqrt(a*a + b*b);
    cout<<"The value of c is: "<<floor(c)<<endl;
}