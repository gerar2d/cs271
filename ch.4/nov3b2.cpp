#include <iostream>
using namespace std;

int main(){
    int grade;

    cout<<"Enter grade (0-100): ";
    cin>>grade;

    switch (grade){
         
        case 90 ... 100: cout<<"A\n";
        break;
        case 80 ... 89: cout<<"B\n";
        break;
        case 70 ... 79: cout<<"C\n";
        break;
        case 60 ... 69: cout<<"D\n";
        break;
        default: cout<<"F\n";
        break;

        
    }

}