#include<iostream>
#include<conio.h>
using namespace std;


int main(){
while(1){

    try{
    int n1,n2;

    cin>>n1>>n2;

    if(n2==0){
        throw -1;
    }

    double result=(double) n1/n2;

    cout<<result;
    }

    catch(...){
    cout<<"Divide By zero is not possible, Please Try again"<<endl;
    }


}
getch();
}

