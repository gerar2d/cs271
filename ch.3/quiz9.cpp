//Gerard Di Mattia

#include <iostream>
using namespace std;

int main(){
    int s;
    int i;
    s = 1;
    i = 1;

    while (i<=15){
        s = s * i ;
        cout<<s<<endl;
        i = i + 1;
    }
    cout<<"count is "<<i<<" total is "<<s<<endl;
}