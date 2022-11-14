#include <iostream>
using namespace std;

int main(){
    int i,total=0;

    do{
        cout<<"enter 0 if you want to stop or enter an integer to continue: ";
        cin>>i;
        if (i%2==0){
            total+= i;
            
        }
      cout<<total<<endl;
    }while (i !=0);
    
}