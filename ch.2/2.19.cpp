//Gerard Di Mattia
//2.19 3 integers

#include <iostream>
using namespace std;

int main(){
    int f_int = 3;
    int s_int = 5;
    int t_int = 6;
    int sum = f_int + s_int + t_int;
    float average = f_int + s_int +t_int /3;
    int prod = f_int * s_int * t_int; 

    cout<<"Input three different integers: "<<f_int<<" "<<s_int<<" "<<t_int<<endl;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<average<<endl;
    cout<<"Product is "<<prod<<endl;
    if (f_int < s_int && f_int < t_int){
        cout<<"Smallest is "<<f_int<<endl;
    }
    if (s_int < f_int && s_int < t_int){
        cout<<"Smallest is "<<s_int<<endl;
    }
    if (t_int < s_int && t_int < f_int){
        cout<<"Smallest is "<<t_int<<endl;
    }      
    if (f_int > s_int && f_int > t_int){
        cout<<"Largest is "<<f_int<<endl;
    }
    if (s_int > f_int && s_int > t_int){
        cout<<"Largest is "<<s_int<<endl;
    }
    if (t_int > s_int && t_int > f_int){
        cout<<"Largest is "<<t_int<<endl;
    }   
}