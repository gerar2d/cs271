#include <iostream>
using namespace std;

int main(){
    char grade;

    cout<<"Enter grade (A-Z): ";
    cin>>grade;

    switch (grade){
        case 'a':
        case 'A' :cout<<"90-100\n";
            break;
        case 'b':
        case 'B' :cout<<"80-89\n";
            break;        
        case 'c':
        case 'C':cout<<"70-79\n";
            break; 
        case 'd':
        case 'D':cout<<"60-69\n";
            break;  
        case 'f':
        case 'F':cout<<"0-59\n";
            break;  
        default: cout<<"error\n";
            break;             
    }
}