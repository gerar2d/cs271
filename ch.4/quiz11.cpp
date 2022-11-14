#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int s=1;
    double total= 1;
    
    for (int x=4 ;x <= 49 ;x += 3){
    
        total *= x;
        
       
    }
    cout<<setprecision(1);
    cout<<total<<endl;
    return 0;
}