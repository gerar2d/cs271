# include <iostream>     
using std:: cout;
using std:: endl;

int main()
{
  int a, b;
  int x, y;
  a = 1;
  b = 1;
  x = a++;
  y = ++b;

 cout << x << endl;
 cout << y << endl;
 cout << a << '\t' << b << endl;

 return 0;

}
