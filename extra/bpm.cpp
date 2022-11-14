#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double age;
    double mhr_p;
    char option;

    
    
    cout<<"What is your age: ";
    cin>>age;
    double mhr = 220 - age;
    
    cout<<"Your maximum heart rate is : "<<mhr<<endl;
    cout<<"Do you want to know a specific heartrate is or just zones?\n";
    cout<<"(Type 'y' for specific heartrate or 'n' for zones.)\n";
    cin>>option;

    if (option == 'y'){
    //double mhr_c = mhr_p / 100;
    cout<<"What "<<'%'<<" of your maximum heart rate are you looking for: ";
    cin>>mhr_p;
    float mhrfull = mhr * (mhr_p/100);
    //double mhrfull = mhr * mhr_c;
    cout<<mhr_p<<'%'<<" of your maximum heart rate of "<<mhr<<" is "<<mhrfull<<endl;
    }
    else{
    //cout<<mhr_c<<'%'<<" of your maximum heart rate is "<<mhrfull;
    cout<<"Your zone 1 is between "<<mhr * .50<<" and "<<mhr * .60<<" heartbeats per second."<<endl;
    cout<<"Your zone 2 is between "<<mhr * .60<<" and "<<mhr * .70<<" heartbeats per second."<<endl;
    cout<<"Your zone 3 is between "<<mhr * .70<<" and "<<mhr * .80<<" heartbeats per second."<<endl;
    cout<<"Your zone 4 is between "<<mhr * .80<<" and "<<mhr * .90<<" heartbeats per second."<<endl;
    cout<<"Your zone 5 is between "<<mhr * .90<<" and "<<mhr<<" heartbeats per second."<<endl;
    }

}