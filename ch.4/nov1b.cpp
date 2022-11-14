#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double factorial =1;

    cout<<"Enter the intefer (n): ";
    cin>>n;
    for (int i=n; i>=1; i--){
    factorial *= i;
    }
    cout<<fixed<<setprecision(0);
    cout<<"n!="<<factorial<<endl;
    return 0;
}