/*
   1
  3 3
 5 5 5
7 7 7 7

*/

#include<iostream>
using namespace std;
int main(){
int num=1;
int space=3;
    for(int i=1;i<=4;i++){

        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<num<<" ";
        }cout<<endl;
        space--;
        num+=2;
    }
}