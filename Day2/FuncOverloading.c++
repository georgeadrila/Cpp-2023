#include<iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping);

int main(){
    // Function overloading is a feature in C++ that allows you to have multiple functions with the same name
    // but different parameters
    bakePizza();
    bakePizza("Pepperoni");
    return 0;
}

void bakePizza(){
    cout << "Here is your pizza" << endl;
}

void bakePizza(string topping){
    cout << "Here is your pizza with " << topping << endl;
}