#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main(){
 char name1[]="Zulkar";
 char name3[]="Nine";
 char name2[10];
 int len=strlen(name1);//For length
 cout<<len<<endl;

strcpy(name2,name1);//For string Copy
cout<<name2<<endl;


strcat(name1,name3);//For string Concat
cout<<name1<<endl;

char name[]="Zulkar";
strupr(name);//For string Uppercase
cout<<name<<endl;

strlwr(name);//For string lower
cout<<name<<endl;

int value=strcmp(name1,name2);//For string compare

if(value==0)
    cout<<"string are equal"<<endl;
else
cout<<"string are Notequal"<<endl;



    getch();
}
