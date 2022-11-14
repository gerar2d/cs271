#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    
    cout << "Enter 1 to Add 2 Numbers" <<
   "\nEnter 2 to Subtract 2 Numbers" <<
   "\nEnter 3 to Multiply 2 Numbers" <<
   "\nEnter 4 to Divide 2 Numbers" <<
   "\nEnter 0 To Exit\n";
    cin>>c;
    
    cout<<"Enter two integers: ";
    cin>>a>>b;
while (true){
    if(c==1){
        cout<<"Result: "<<a+b<<endl;
        break;
    }
    if(c==2){
        cout<<"Result: "<<a-b<<endl;
        break;
    }
    if(c==3){
        cout<<"Result: "<<a*b<<endl;
        break;
    }
    if(c==4){
        cout<<"Result: "<<a/b<<endl;
        break;
    }
    else{
        break;
    }
}
}