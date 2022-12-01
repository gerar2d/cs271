#include <iostream>
using namespace std;

bool Check(int a, int b, int c);

int main()
{
    int a,b,c;
    int flag;
    cout<<"Enter 3 integers: ";
    cin>>a>>b>>c;
    flag = Check(a,b,c);
    if (flag == true)
        cout<<"The sum of a and b is equal to c";
    else
        cout<<"the sum of a and b is not equal to c";

}

bool Check(int a, int b, int c)
{
    bool flag = true;
    if (a + b != c)
        flag = false;
    
    return flag;
}