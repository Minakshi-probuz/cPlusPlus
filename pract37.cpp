/*
  55555
   4444
    333
     22
      1
      */

#include<iostream>
using namespace std;
int main(){
int num=5;
//int space=3;
    for(int i=5;i>=1;i--){

        for (int j = 5; j >=i; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<num;
        }cout<<endl;
        //space--;
        num--;
    }
}