//Gerard Di mattia
//class oct 6 22 (student grade)

#include <iostream>
using namespace std;
int main(){
    int grade;
    
    cout<<"Enter student grade: ";
    cin>>grade;

    if (grade >= 90){
        cout<<"Student got an A\n";
    }
    else if (grade >= 80){
        cout<<"Student got an B\n";
    }
    else if (grade >= 70){
        cout<<"Student got an C\n";
    }
    else if (grade >= 60){
        cout<<"Student got an D\n";
    }
    else{
        cout<<"Student got an F\n";
    }
}