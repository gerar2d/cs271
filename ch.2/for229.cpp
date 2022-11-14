//Gerard Di Mattia
// cubic table

#include <iostream>
using namespace std;

int main(){
    cout<<"Integer\tSquare\tCube\n";

    for (int i = 1; i <= 9; i+=2){
        int first = i;
        int squared = i * i;
        int cubed = squared * i;
            
        cout<<first;
        cout<<"\t"<<squared;
        cout<<"\t"<<cubed<<endl;
    }
    return 0;
}