#include <iostream>
using namespace std;

int main(){
    int s;
    int i;
    s = 0;
    i = 1;

    while (i<=100){
        s = s+ (i*i);
        i = i+ 1;
    }
    cout<<s<<endl;
}