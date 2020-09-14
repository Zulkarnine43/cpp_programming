#include<iostream>
#include<conio.h>
using namespace std;

int main(){

   // int A[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int A[3][3];

    cout<<"Enter the elements for the matrix"<<endl;
      for(int row=0;row<3;row++){
         for(int col=0;col<3;col++){
                cout<<"A["<<row<<"]["<<col<<"]=";
        cin>>A[row][col];
    }
    cout<<endl;
    }

    //printing 2d array

    for(int row=0;row<3;row++){
         for(int col=0;col<3;col++){
        cout<<A[row][col]<<" ";
    }
    cout<<endl;
    }


    getch();
}

