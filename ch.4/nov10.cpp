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
}