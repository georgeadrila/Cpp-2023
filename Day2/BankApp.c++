#include<iostream>
#include<fstream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice;
    do{
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Thank you for using our service" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
}while(choice != 4);
    return 0;
}

void showBalance(double balance){
    // double balance;
    cout << "Your balance is: " << balance << endl;
}

double deposit(){
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    return amount;
}

double withdraw(double balance){
    double amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if(amount > balance){
        cout << "Insufficient balance" << endl;
        return 0;
    }
    return amount;
}

