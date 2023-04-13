#include<iostream>
using namespace std;

int main(){
    double temp;
    char unit;

    cout << "Enter C or F" << endl;
    cin >> unit;

    switch (unit)
    {
    case 'F':
        cout << "Enter the temperature in Celcius";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "The temperature is " << temp << "F" << endl;
        break;

    case 'C':
        cout << "Enter the temperature in Farenheit";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "The temperature is " << temp << "C" << endl;
        break;

        default:
        cout << "Be serious";
        break;
    }
}