#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int num,row,col;
cout<<"Enter a number";
cin>>num;

for(row=0;row<=num;row++){
        for( col=0;col<=row;col++){
                cout<<row;
        }
        cout<<endl;
}

getch();
}
