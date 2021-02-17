/*
   A
  B B
 C C C
D D D D
*/


#include<iostream>
using namespace std;
int main(){
char ch='A';
int space=3;
    for(int i=1;i<=4;i++){

        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch<<" ";
        }cout<<endl;
        space--;
        ch++;
    }
}