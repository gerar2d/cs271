# include <iostream>
using namespace std;
 
int main ( )                                                 
{
 int hour;
 int total = 0;
 int day = 1;
 
 cout<<"Enter the number of hours or -1 to quit: ";
 cin>>hour;
  if (hour == -1){
    cout<<"\nNo hours were entered\n";
    
    }
 else{

 while (hour != -1){
    total += hour;
    cout<<"Enter the number of hours or -1 to quit: ";
    cin>>hour;
    day++;
 }
 

 cout<<"\nThe employee worked an average of "<<total/(day-1)<<" hours/day for "<<day-1<<" days."<<endl;
 }
}
