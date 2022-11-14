# include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a,b;
    int max;
cout << "Enter two integers a and b: " ;
cin >> a >> b;
max = ( a > b && ) ? a : b;
cout << "The larger number is " << max << endl;
}     