#include <iostream>
using namespace std;

void Swap(int &x, int &y);

int main()
{
   int x = 4, y = 7;

   Swap(x,y);

   cout <<"x: "<<x<<"\ty: "<<y<<endl;
   return 0; 
}

void Swap(int &x,int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

// In computer science, a stack is an abstract data type and data structure based on the principle of Last In First Out (LIFO).
// & reference syntax.