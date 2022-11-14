#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=4; i++)
    {
        for (int j=1;j<=7;j++)
        {
        if ((4-i<j) && (j<4+i))
            cout<<'*';
        else
            cout<<' ';
        }
        cout<<endl;
    }
        
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=7; j++)
        {
            if ((i<j) && (j<8-i))
                cout<<'*';
            else 
                cout<<' ';
        }
        cout<<endl;
    }
}