#include <iostream>
using namespace std;

int main(){
    int sum;
    int counter;
    sum = 0;
    counter = 1;

    while(counter <= 100){
        sum = sum + counter;
        counter = counter + 1;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}