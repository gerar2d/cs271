//Gerard Di Mattia
// positive number output.

#include <iostream>

using namespace std;

int main(){
    float a;

    cout<<"Enter a numbers: ";
    cin>>a;

    if (a > 0){
        cout<<"Number ("<<a<<") is a positive.\n";
    }
    if (a == 0){
        cout<<"0 is neither a positive or a negative\n";
    }
    if (a < 0) {
        cout<<"Number ("<<a<<") is a negative.\n";
    }
}