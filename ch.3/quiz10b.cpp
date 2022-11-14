#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int s=1, c=1;

    while (c <= 49)
    {

        s = pow(c+=2,3) + s;
        
    }
    cout<<"C="<<c<<endl<<"S="<<s<<endl;
}