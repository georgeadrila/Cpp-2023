// used to create an additional name for a type or an existing type
// hels with readabiluty and reduces typos
#include <iostream>
#include <vector>
using namespace std;

// typedef vector<pair<string, int>> pairlist_t;

typedef string text_t;
typedef int number_t;

using text_t = string;
using number_t = int;

int main(){
    // pairlist_t pairlist;
    text_t text = "Hello World";
    cout << text << endl;
    number_t number = 10;
    cout << number << endl;
}