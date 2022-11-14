#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    
    for (int x=1 ;x <= 100 ;x += 2){
        sum = sum + x;
        cout<<sum<<endl;
    }
    cout<<sum<<endl;
}