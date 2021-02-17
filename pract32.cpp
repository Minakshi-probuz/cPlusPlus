#include<iostream>
using namespace std;
int main(){
 char ch='A';
 for(int i=5;i>=1;i--){

     for(int j=4;j>=1;j--){

         cout<<" ";
     }for (int  k = 1; k <=i; k++)
     {
         cout<<ch;
         //ch++;
      }cout<<endl;
       ch++;
 }



}