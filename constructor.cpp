#include<iostream>
#include<conio.h>
using namespace std;


class student{
public :
int id;
double gpa;

student(int x, double y){
    id=x;
    gpa=y;

cout<<id<<endl;
cout<<gpa<<endl;
}

};

int main(){
student Alim(101,102);

getch();
}
