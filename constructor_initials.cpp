#include<iostream>
#include<conio.h>
using namespace std;

class student{
public:
  const int admissionFee;
  const int examFee;

    student(int x, int y)
    :admissionFee(x), examFee(y)
    {
    cout<<admissionFee<<endl;
    cout<<examFee<<endl;
    }

};

int main(){
    student s1(15000,500);
    getch();
}
