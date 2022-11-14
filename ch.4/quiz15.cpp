#include <iostream>
using namespace std;

int main(){
    int unit;

    cout<<"What is your Electricity unit charge: ";
    cin>>unit;

    switch(unit){
    case 0 ... 50: cout<<unit/0.50<<endl;
    break;
    case 51 ... 150: cout<<unit/0.75<<endl;
    break;
    case 151 ... 250: cout<<unit/1.20<<endl;
    break;
    default: cout<<(unit/1.50) + (0.2 * unit)<<endl;
    break;
    
    }

    return 0;
}