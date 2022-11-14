#include <iostream>
using namespace std;

int main(){
    int sum;
    int i;
    sum = 0;
    i = 1;

    while(i<=100){
        sum +=i;
        i+=1;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}