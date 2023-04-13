#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "Guess My Number Game" << endl;
    do
    {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < num)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "You got it in " << tries << " tries!" << endl;
        }
        
        
    } while (guess != num);

    cout << "Game Over" << endl;
    
}