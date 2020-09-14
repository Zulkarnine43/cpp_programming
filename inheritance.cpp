#include<iostream>
#include<conio.h>
using namespace std;

class person{
public:
    string name;
    int age;

    void display1(string name, int age){
    cout<<name<<endl;
    cout<<age<<endl;
    }

};


class student : public person{
public:
   // string name;
    //int age;
    int id;

    void display2(string name, int age, int id){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<id<<endl;
    }

};




int main(){

    student s1;
    s1.display2("Zulkar",18,101);
    s1.display1("Nine",18);



getch();
}


