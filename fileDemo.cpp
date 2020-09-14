#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;


int main(){
    //ofstream file;
   // file.open("student.txt");
    //file<<"I am Zulkar Nine. I am from Narayangonj";
    //file.close();


    //write file
    string name;

    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    cout<<"Enter Your name";;
    getline(cin,name);
    file<<"Welcome"<<name<<endl;

    cout<<"Data is stored"<<endl;
    file.close();


    //Read file
  //  string line;
    //ofstream file("details.txt");

  //  while(getline(file,line)){
   // cout<<line<<endl;
   // }
   // file.close();


    getch();
}
