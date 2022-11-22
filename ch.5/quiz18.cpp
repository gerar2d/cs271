#include <iostream>

using namespace std;


int test(int a, int b, int c){
    if (a+b==c)
    cout<<"***TRUE***"<<a<<'+'<<b<<'='<<c<<endl;
    else
    cout<<"***FALSE***"<<a<<'+'<<b<<"!="<<c<<endl;

    return c;
}

int main(){
    cout<<test(1,3,3);
    cout<<endl;
   return 0;
}