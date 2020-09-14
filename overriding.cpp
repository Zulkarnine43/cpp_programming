#include<iostream>
#include<conio.h>
using namespace std;

class person{
public:
    string name;
    int age;

    void display(){
    cout<<"i am person"<<endl;
    }
};

class student : public person{
public:
    int id;

    void display(){
    cout<<"i am student"<<endl;
    }
};
int main(){
    student s;
    s.display();
    person p;
    p.display();

getch();
}
