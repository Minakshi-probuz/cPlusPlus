/*
    A
   B B
  C C C 
*/

#include<iostream>
using namespace std;
int main(){
char ch='A';
//int space=3;
    for(int i=1;i<=3;i++){

        for (int j = 3; j >=i; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch<<" ";
            
        }cout<<endl;
        //space--;
        ch++;;
    }
}