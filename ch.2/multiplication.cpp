//Gerard Di Mattia 
// Math

#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int multiplication;
    int sum;
    int subtraction;
    int division;

    cout <<"Enter the first integer: ";
    cin >>number1;
    cout <<"Enter the second integer: ";
    cin >>number2;

    multiplication = number1 * number2;
    sum = number1 + number2;
    subtraction = number1 - number2;
    division = number1 / number2;

    cout <<"The sum is: " <<sum<<endl;
    cout <<"The product is: " <<multiplication <<endl;
    cout <<"The difference is: " <<subtraction <<endl;
    cout <<"The quotient is: " <<division <<endl;
}


