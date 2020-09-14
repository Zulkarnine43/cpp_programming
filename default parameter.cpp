#include<iostream>
#include<conio.h>
using namespace std;

 int addition(int a=20 , int b=30){
    int sum=a+b;
    return sum;
    }


int main(){

    int a=addition();
    //int a=addition(30,40);//overright the value

    cout<<a<<endl;

       getch();
}

