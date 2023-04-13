#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));

    int num = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;


    cout<<num<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
}