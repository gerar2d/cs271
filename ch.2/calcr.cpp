#include <iostream>
#include <math.h>

using namespace std;

class Calculator{
    float a,b;

    public:

    void result(){
        cout<<"Enter the two digits: ";
        cin>>a>>b; 
    }
    float add(){
        return a + b;
    }
    float sub(){
        return a - b;
    }
    float mult(){
        return a * b;
    }
    float div(){
        if (b == 0){
            cout<<"infinity number\n";
            exit(0);
        }
        return a / b;
    }
    float pwr(){
        return pow(a,b);
    }
};

int main (){
    int ch;
    Calculator c;
     cout << "Enter 1 to Add 2 Numbers"<<
    "\nEnter 2 to Subtract 2 Numbers"<<
    "\nEnter 3 to Multiply 2 Numbers"<<
    "\nEnter 4 to Divide 2 Numbers"<<
    "\nEnter 5 to enter a number and its power"
    "\nEnter other key To Exit";
    cout<<"\nEnter Choice: ";
    cin>>ch;

    if (ch == 1){
        c.result();
        cout<<"Result: "<<
        c.add()<<endl;
        
    }
    if (ch == 2){
        c.result();
        cout<<"Result: "<<
        c.sub()<<endl;
    }
    if (ch == 3){
        c.result();
        cout<<"Result: "<<
        c.mult()<<endl;
    }
    if (ch == 4){
        c.result();
        cout<<"Result: "<<
        c.div()<<endl;
    }
    if(ch == 5){
        c.result();
        cout<<"Result: "<<
        c.pwr()<<endl;
    }
    else {
        return 0;    
    }
    
}