// pre- and -post incriment.
// a = 12
// a+= a-=a a*=a          
// 12 *= 12 = a=144
// 144 -= 144 = a=0
// 0 += 0 = a=0



#include <iostream>
using namespace std;

int main(){
    int i,j,m,n;
    i=8;
    j=10;

    m = ++i + j++;
    n = (++i) + (j++) +m;

    cout<<i<<'\t'<<j<<'t'<<'\t'<<n<<endl;
    return 0;
}