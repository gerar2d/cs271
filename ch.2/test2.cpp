// Gerard Di Mattia
// Even or ODD input

#include <iostream>
using namespace std;

int p_input;

int main(){
    

    cout<<"Enter a positive integer: ";
    cin>>p_input;

    if (p_input % 2 == 0){
        cout<<"The integer you have entered "<<p_input<<", is EVEN.\n";
    }
    if (p_input % 2 != 0){
        cout<<"The integer you have entered "<<p_input<<", is ODD.\n";
    }
    return 0;
}