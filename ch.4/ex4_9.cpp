#include <iostream>
using namespace std;

int main(){
    int product = 1;

    for (int x=3; x <= 15; x+=2){
        product = product * x;
        cout<<x<<" * "<<product<<endl;
    }
    cout<<"-----"<<product<<endl;

}