// Gerard Di Mattia
// with 5 rows and 3 columns

#include <iostream>
using namespace std;

int main() {

   int rows = 5;
   int columns = 5;

   for (int i = 1; i <= rows; ++i) {
      for (int j = 2; j <= columns; ++j) {
         cout << "*";
      }
      cout << endl;
   }

   return 0;
}