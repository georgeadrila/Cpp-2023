#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j%2==1)
                continue;
            cout<<j << " ";
        }
        cout<<endl;
    }
    return 0;
}