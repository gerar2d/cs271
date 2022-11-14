#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1,x2,y1,y2;
    cout<<"input x1: ";
    cin>>x1;
    cout<<"input y1: ";
    cin>>y1;
    cout<<"input x2: ";
    cin>>x2;
    cout<<"input y2: ";
    cin>>y2;

    cout<<"distance between points."<<sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);;
}