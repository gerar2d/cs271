//Gerard Di Mattia
// Greater or less

#include <iostream>
using namespace std;

int m;

int main(){
    cout<<"Enter an integer: ";
    cin>>m;

    if(m > 0){
        cout<<"The value of n is 1.\n";
    }
    if(m == 0){
        cout<<"The value of n is 0.\n";
    }
    if(m < 0){
        cout<<"The value of n is -1.\n";
    }
    return 0;
}