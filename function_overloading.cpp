#include<iostream>
#include<conio.h>
using namespace std;

 void square(int n){
    int sum=n*n;
    cout<<"square of "<<n<<"="<<sum<<endl;
    }

     void square(int n, int m){
    int sum=n*m;
    cout<<"square of "<<n<<"="<<sum<<endl;
    }


int main(){

    square(5);
    square(5,6);



       getch();
}

