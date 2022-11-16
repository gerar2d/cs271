#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=3; i++)
    {
        for (int j=1;j<=5;j++)
        {
        if ((3-i<j) && (j<3+i))
            cout<<" * ";
        else
            cout<<' ';
        }
        cout<<endl;
    }
        
    for (int i=1; i<=2; i++)
    {
        for (int j=1; j<=5; j++)
        {
            if ((i<j) && (j<6-i))
                cout<<" * ";
            else 
                cout<<' ';
        }
        cout<<endl;
    }
}