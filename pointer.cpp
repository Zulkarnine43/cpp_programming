#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int x=5,y=6;
    int *p1,*p2;

    p1=&x;
    p2=&y;

    int sum=*p1+*p2;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<sum<<endl;



       getch();
}

