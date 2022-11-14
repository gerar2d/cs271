#include <iostream>
using namespace std;

int main(){
    int unit;
    char x;
    double sur;

    cout<<"What is your Electricity unit charge: ";
    cin>>unit;

    if (unit <= 50)
        x = 'A';
    if(unit <= 150)
        x = 'B';
    if(unit <= 250)
        x= 'C';

    sur = unit * 0.20;
    switch(x){
    case 'A': cout<<unit*0.50<<endl;
    break;
    case 'B': cout<<unit*0.75<<endl;
    break;
    case 'C': cout<<unit*1.20<<endl;
    break;
    default: cout<<(unit*1.50) + sur<<endl;
    break;
    
    }

    return 0;
}