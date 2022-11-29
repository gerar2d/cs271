#include <iostream>
using namespace std;

void Swap(int &x, int &y);

int main()
{
   int x = 4, y = 7;

   swap (x,y);

   cout <<"x: "<<x<<"\ty:"<<y<<endl;
   return 0; 
}

void Swap(int &rx,int &ry)
{
    int t;
    t = rx;
    rx = ry;
    ry = t;
}