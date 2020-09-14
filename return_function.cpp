#include<iostream>
#include<conio.h>
using namespace std;

 int addition(int a , int b){
    int sum=a+b;
    return sum;
    }
     int subtraction(int a , int b){
    int sum=a-b;
    return sum;
    }
     int multiplication(int a , int b){
    int sum=a*b;
    return sum;
    }
     int division(int a , int b){
    float sum= (float)a/b;
    return sum;
    }

int main(){

    int a=addition(10,20);
    int s=subtraction(20,20);
    int m=multiplication(30,20);
    int d=division(30,20);

    cout<<a<<endl;
    cout<<s<<endl;
    cout<<m<<endl;
    cout<<d<<endl;
       getch();
}

