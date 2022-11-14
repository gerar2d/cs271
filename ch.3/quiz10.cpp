# include <iostream>
    using std::cout;
     
    int main ( )
 {
    int  a = 5;
    int  b = 8;
    int x, y;
 
   x = ++a + b++;
   y = ++b + ++a;
       
    cout<< "x=" << x << "," << "y=" << y << "\n";
    cout<< "a=" << a << ","  << "b=" << b << "\n";
 
    return 0;
}