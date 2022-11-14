#include <iostream>
using namespace std;

int main(){
    int stairs;
    cout<<"how many stairs: ";
    cin>>stairs;
    
    for (int i = 1; i < stairs; i++){
        for (int spaces = stairs - i; spaces > 1; spaces--){
            cout<<(" ");
        }
        for (int j = 0; j < i; j++){
            cout<<"#";   
        }cout<<endl;
        
    }
}