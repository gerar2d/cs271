#include <iostream>
using namespace std;

int main(){
    for (int count = 1; count<= 10; count++){
        if(count==5)
        continue;

        cout<<count<<" ";
    }

    cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}