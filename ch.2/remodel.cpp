//Gerard Di Mattia
// remodel class
#include <iostream>
using namespace std;

class Circle{
    public:
    float circumference = 3.14159;
    float radius = 3;
    float diameter = 2 * radius;
    float area = circumference * radius * radius;   
    
    void Diam(){
        cout<<"Diameter of the circle is "<<diameter<<endl<<endl;
    }
    void Cirm(){
        cout<<"Circumference of the circle is "<<circumference<<endl<<endl;
    }
    void are(){
        cout<<"Area of the circle is "<<area<<endl<<endl;
    }
};

int main(){
    Circle Circle1;
    Circle1.Diam();
    return 0;    
}