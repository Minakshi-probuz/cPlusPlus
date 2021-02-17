/*
      *
     * *
    * * *
   * * * *
   */

#include<iostream>
using namespace std;
int main(){

int space=3;
    for(int i=1;i<=4;i++){

        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }cout<<endl;
        space--;
    }
}