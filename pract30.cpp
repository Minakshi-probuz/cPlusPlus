/*
ABCDE
ABCD
ABC
AB
A
*/




#include<iostream>
using namespace std;
int main(){

char ch2='A';
    for(int i=5;i>=1;i--){
         
        for(int j=1;j<=i;j++){
          cout<<ch2;
          ch2++;
        }cout<<endl;
        ch2='A';
    }
}