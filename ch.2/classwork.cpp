// Gerard Di Mattia
// 25697

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a 5-digit integer: ";
    cin>>number;
    cout<< number / 10000<<",";
    cout<< number / 1000 - number / 10000 * 10<<',';
    cout<< number / 100 - number/1000 * 10<<',';
    cout<< number / 10 - number/100 *10<<',';
    cout<< number - number/10*10<<'\n';
    return 0;
}