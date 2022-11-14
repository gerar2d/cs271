#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main(){
    int r;
    float v;
    cout<<"Calculate the volume of a sphere :\n";
    cout<<"--------------------------------------- \n";
    cout<<"Input the radius of a sphere : ";
    cin>>r;

    v = (4*3.14*pow(r,3))/3;

cout<<fixed<<setprecision(2);
cout<<"The volume of a sphere is : "<<v<<endl;


}