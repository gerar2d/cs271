#include <iostream>
using namespace std;

int main(){
    int product = 3;
// while loop with no {} only reads the next line. if you want a bigger body you will need to them inside a braket.
    while (product <=100)
        product = product *3;

    cout<<"The first power of 3 larger than 100 is: "<<product<<endl;
    return 0;
    
}