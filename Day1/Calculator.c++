#include<iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;
    double result;

    cout << "************** CALCULATOR **************" << endl;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+': 
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;

    case '/':
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
    
    default:
        cout << "Error! operator is not correct";
        break;
    }
    cout << "**************************************";
}