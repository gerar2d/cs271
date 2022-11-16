#include <iostream>
using namespace std;


int main(){
    unsigned long long total=1;

    for (int start=49; start >= 1; start-=3)
        {
            total *= start;
        
            cout<<start<<endl;
        }
    cout<<total<<endl;
}