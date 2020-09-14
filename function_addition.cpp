#include<iostream>
#include<conio.h>
using namespace std;

 void addition(int a , int b){
    int sum=a+b;
    cout<<sum<<endl;
    }
     void subtraction(int a , int b){
    int sum=a-b;
    cout<<sum<<endl;
    }
     void multiplication(int a , int b){
    int sum=a*b;
    cout<<sum<<endl;
    }
     void division(int a , int b){
    float sum= (float)a/b;
    cout<<sum<<endl;
    }

int main(){

    addition(10,20);
    subtraction(20,20);
    multiplication(30,20);
    division(30,20);
       getch();
}

