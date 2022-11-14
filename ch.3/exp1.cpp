# include <iostream>
using std::cout;
using std::cin;
using std::endl;
       int main( )
{
        int a, b;
        cout<< "Enter the first integer: " ;
        cin>> a;
        cout<< "Enter the second integer: ";
        cin>> b;
    if (a%b==0){
        cout<<a<<" Is a multiple "<<b<<endl;
    }
}