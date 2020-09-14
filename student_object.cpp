#include<iostream>
#include<conio.h>
using namespace std;


class student{
public :
int id;
double gpa;

void adding(){
cout<<id<<" "<<gpa;
}

void setValue(int x, double y){
id=x;
gpa=y;
}

};

int main(){
student Alim;
//Alim.id=101;
//Alim.gpa=3.44;
Alim.setValue(101,3.44);
Alim.adding();

getch();
}
