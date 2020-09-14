#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser{
public:

    void call(){
    cout<<"Hello!"<<endl;
    }
    virtual void sendMessage()=0;
};

class Rahim : public MobileUser{
void sendMessage(){
cout<<"Hi, This is Rahim"<<endl;
}

};

class karim : public MobileUser{
void sendMessage(){
cout<<"Hi, This is karim"<<endl;
}

};
int main(){
MobileUser *m;
Rahim r;
karim k;

m=&r;
m->sendMessage();

m=&k;
m->sendMessage();


getch();
}

