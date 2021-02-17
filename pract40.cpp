/*
  1
 22
333
   */
#include<iostream>
using namespace std;
int main(){
int num=1;
//int space=3;
    for(int i=1;i<=3;i++){

        for (int j = 3; j >=i; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<num;
            
        }cout<<endl;
        //space--;
        num++;
    }
}