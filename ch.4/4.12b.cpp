#include <iostream>
using namespace std;

int main(){
    int h;
    cout<<"how many rows: ";
    cin>>h;


    for (int i=1; i <= h; i++)
    {
    for (int x=1; x <= i; x++){
    cout<<'*';
    }
    cout<<endl;
    }
    cout<<endl;
    for (int i=h; i >= 1; i--)
    {
    for (int x=1; x<=i; x++){
    cout<<'*';
    }
    cout<<endl;
    }
    cout<<endl;
     for (int i=0; i < h; i++)
    {
    for (int j = h-1; j > i; j--){
        cout<<' ';
    }
    for (int x=-1; x < i; x++){
    cout<<'*';
    }
    cout<<endl;
    }
    cout<<endl;
    for (int i=h; i >= 1; i--)
    {
    for (int j = h; j > i; j--){
    cout<<' ';
    }
    for (int x=0; x<i; x++){
    cout<<'*';
    }
    cout<<endl;
    }
}