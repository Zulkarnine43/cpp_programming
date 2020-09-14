#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float num1,num2;
         //cout<<showpoint;//For print doshomik value;
      // cout<<noshowpoint;//For not  print doshomik value;
        //cout<<fixed;//For print 2 ghor after value;
        //  cout<<setprecision(10);//For print how many number  value;

cout<<"Enter a number is";
cin>>num1>>num2;

float sum=num1+num2;

cout<<setw(15)<<"Your press number is "<<sum;//setW output value sonkha
return 0;
}
