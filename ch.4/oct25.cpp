#include <iostream>
using namespace std;

int main(){
    int g_sum = 0;
    int counter = 1;
    int s_grade;
    float a_grade;
    
    while(counter <= 20){
        cout<<"Student grade: ";
        cin>>s_grade;
        g_sum = g_sum + s_grade;
        counter ++;
    }
    a_grade = g_sum / 20;
    cout<<a_grade<<endl;
}