//Gerard Di Mattia
//2.17

#include <iostream>
using namespace std;

int main(){
    int f_int;
    int s_int;
    
    cout<<"First Integer: ";
    cin>>f_int;
    cout<<"Second Integer: ";
    cin>>s_int;
    if (f_int > s_int){
        cout<<f_int<<" is greater than "<<s_int<<endl;
    }
    if(s_int > f_int){
        cout<<s_int<<" is greater than "<<f_int<<endl;
    }
    return 0;
}