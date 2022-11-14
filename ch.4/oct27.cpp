#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int counter = 0;
    int number=0,a;
   
    do{ 
        total = total + number;
        cout<<"Enter number or 0 to quit: ";
        cin>>number;

  
    }while (number !=0);

    a = total / (2-1);
    cout<<a<<endl;
}