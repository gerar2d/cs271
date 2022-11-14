#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter 3 integers: ";
    cin>>a>>b>>c;


    if(a > b && a > c){
        cout<<"A is the largest integer ("<<a<<")\n";
    }
    if(b > a && b > c){
        cout<<"B is the largest integer ("<<b<<")\n";
    }
    if(c > a && c > b){
        cout<<"C is the largest integer ("<<c<<")\n";
    }
    return 0;
}