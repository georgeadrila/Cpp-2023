#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int RandNum = (rand() % 6) + 1;

    switch (RandNum)
    {
    case 1:
        cout << "You have found a sword!" << endl;
        break;
    case 2:
        cout << "You have found a shield!" << endl;
        break;
    case 3:
        cout << "You have found a potion!" << endl;
        break;
    case 4:
        cout << "You have found a key!" << endl;
        break;
    case 5:
        cout << "You have found a treasure!" << endl;
        break;
    case 6:
        cout << "You have found a monster!" << endl;
        break;
    
    default:
        break;
    }
}