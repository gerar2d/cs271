// Gerard Di Mattia
// Volume of a sphere

#include <iostream>
using namespace std;


int radius = 6;
float volume = radius * radius * radius * 4/3 * 3.14;

int main(){
   
    cout<<"Calculate the volume of a sphere :\n";
    cout<<"-----------------------------\n";
    cout<<"Input the radius of a sphere : "<<radius<<endl;
    cout<<"The volume of a sphere is : "<<volume<<endl;
    return 0;
}