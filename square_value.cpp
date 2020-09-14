#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int num,sum=0;
cout<<"Enter a number";
cin>>num;

for(int i=0;i<=num;i=i+1){
 sum=sum+i*i;
}

cout<<sum;



getch();
}
