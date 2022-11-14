// Gerard Di Mattia
// Cubic Table 

# include <iostream>
using namespace std;

int number1 = 1;
int number2 = 3;
int number3 = 5;
int number4 = 7;
int number5 = 9;
int squared;
int cubed;

int main(){

    cout<<"What is the integer: ";
    cin>> number;
    squared = number * number;
    
    cubed = squared * number;
    cout<<"Integer  Square  Cube\n";
    cout<<number;
    cout<<"\t"<<squared;
    cout<<"\t"<<cubed<<endl;

}