#include <iostream>
using namespace std;

int main()
{
    for (int row=1; row <= 4; row++)
    {
        for(int j=1; j<= row; j--)
        cout<<' ';
        for(int col=1; col<=row; col++)
            cout<<"*";
            cout<<endl;
    }
    
}