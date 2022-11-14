#include <iostream>
using namespace std;

int main(){
    int grade;

    cout<<"Enter grade (0-100): ";
    cin>>grade;

    switch (grade/10){
        case 10: 
        case 9: cout<<"A\n";
        break;
        case 8: cout<<"B\n";
        break;
        case 7: cout<<"C\n";
        break;
        case 6: cout<<"D\n";
        break;
        default: cout<<"F\n";
        break;

        
    }

}