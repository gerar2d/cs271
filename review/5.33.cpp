#include <iostream>
using namespace std;
void QualityPoints(int &a);

int main()
{
    int a;
    cout<<"Enter the average grade: ";
    cin>>a;
    QualityPoints(a);
}

void QualityPoints(int &a)
{
    switch (a/10){
    case 9: cout<<"The student’s GPA is 4\n";
        break;
    case 8: cout<<"The student’s GPA is 3\n";
        break;
    case 7: cout<<"The student’s GPA is 2\n";
        break;
    case 6: cout<<"The student’s GPA is 1\n";
        break;
    default: cout<<"The student’s GPA is 0\n";
    }
}