#include<iostream>
#include<conio.h>
using namespace std;

 //void displayArray(int num[],int arraySize){
   // for(int i=0;i<arraySize;i++){
    //cout<<num[i]<<" ";
    //}
    //}
     void displayArray(int num[]){
    for(int i=0;i<5;i++){
    cout<<num[i]<<" ";
    }
    }

int main(){

    int number[5]={10,20,30,40,50};
    //displayArray(number,5);
    displayArray(number);



       getch();
}

