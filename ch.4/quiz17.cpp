#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
    double i;
    cout<<"Enter an integer: ";
    cin>>i;
    double s = pow(i,2);

    cout<<fixed<<setprecision(2);
    cout<<"The suquare of the REAL number entered is "<<s<<endl; 
    return 0;
}