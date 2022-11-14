#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    int r;
    double d,a,c;
    
    cout<<"Enter the radius: ";
    cin>>r;

    d = 2*r;
    c = 2*M_PI*r;
    a = M_PI*pow(r,2);
    
    cout<<fixed<<setprecision(2);
    cout<<"diameter:"<<d<<endl;
    cout<<"cirmcumference:"<<c<<endl;
    cout<<"area:"<<a<<endl;
}