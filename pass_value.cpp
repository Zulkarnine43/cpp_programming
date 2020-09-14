#include<iostream>
#include<conio.h>
using namespace std;

void disp(int num){
num=20;
}


void display(int *num){
*num=20;
}


int main(){
int x=10;
cout<<"Bofore colling the function"<<x<<endl;

//passing value
disp(x) ;
cout<<"After colling the function"<<x<<endl ;

//passing address
display(&x);
cout<<"After colling the function"<<x<<endl ;



getch();
}

