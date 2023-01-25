#include <iostream>
using namespace std;

int main()
{
    int b = 0;
    int test[] = {22,3,10,98,4};
     for (int i = 0; i <5; i++){
      cout<<test[i]<<endl;
      if (test[i] > b)
      b = test[i];
     }
    cout<<"Largest is "<<b<<endl;
}