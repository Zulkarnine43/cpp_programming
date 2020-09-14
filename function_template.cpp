#include<iostream>
#include<conio.h>
using namespace std;

template <class myTemplate1, class mytemplate2>

//template use then we use any int ,float, double & etc value
myTemplate1 add (myTemplate1 a , mytemplate2 b){
return a+b;
}

int main(){

cout<<add(10,20)<<endl;
cout<<add(10.50,20)<<endl;
getch();
}
