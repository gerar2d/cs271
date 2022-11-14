#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int unit;
    double charge;
    double sur;
    

    cout<<"What is your Electricity unit charge: ";
    cin>>unit;

    switch(unit <= 50)
    {
    case 1: charge = unit*0.50;
    break;
    case 0: switch (unit <= 150)
    {
        case 1: charge = 0.75*unit;
        break;
        case 0 : switch (unit <= 250)
        {
            case 1 : charge = 120*unit;
            break;
            case 0 : charge = 1.50*unit;
        }
    }
    
    }
    cout<<fixed<<setprecision(2);
    sur = unit*0.2;
    cout<<charge<<endl;
    cout<<sur<<endl;
    cout<<charge + sur<<endl;

    return 0;
}