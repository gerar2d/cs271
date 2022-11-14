#include <iostream>
using namespace std;


class Sum{
    public:  
        int x;
        int y;
        void addition(){

            int sum1 = x + y;
            cout<<sum1;
        }
};
class Multiplication{
    public:
        void mult(){
            int mult1 = 3 * 8;
            cout<<mult1;
        }
};


int main(){
    Sum sum1;
    Multiplication mult1;
    sum1.addition();
    mult1.mult();
}