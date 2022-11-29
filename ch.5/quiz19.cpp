#include <iostream>
using namespace std;




int Prime(int x)
{
    if (x%2 == 0 && x!=2)
    cout<<"The input is not a Prime: ";
    else
    cout<<"The input is a Prime: ";
    return x;
}


int main()
{
    int y;
    cout<<"Enter an integer: ";
    cin>>y;
    cout<<Prime(y);

    cout<<endl;
}


