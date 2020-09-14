#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


int main(){

while(1)// while are true
    {
    int guessNumber,randomNumber;

cout<<"Enter Your guess between 1 to 5: ";
cin>>guessNumber;

randomNumber=rand()%5+1;

if(guessNumber==randomNumber){
    cout<<"You Have won"<<endl<<endl;
}else{
    cout<<"You Have lost.Try again"<<endl<<endl;
    cout<<"randomNumber was"<<randomNumber<<endl<<endl;
}


}
getch();
}

