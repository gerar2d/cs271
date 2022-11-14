//Gerard Di mattia
//class oct 6 22 (student grade)

#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e;
    int largest;
    int smallest;
    
    cout<<"Enter 5 integers: ";
    cin>>a>>b>>c>>d>>e;
    largest = a;
    
    if (largest < b){
       largest = b;
    }
    if (largest < c){
        largest = c;
    }    
    if (largest < d){
        largest = d;
    }
    if (largest < e){
        largest = e;
    } 
    cout<<"Largest is "<<largest<<endl;
    smallest = a;
     if(smallest > b){
        smallest = b;
     }
     if(smallest > c){
        smallest = c;
     }
     if(smallest > d){
        smallest = d;
     }
     if(smallest > e){
        smallest = e;
     }
     cout<<"Smallest is "<<smallest<<endl;
}