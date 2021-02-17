/*
   12345
    1234
     123
      12
       1
 */


#include<iostream>
using namespace std;
int main(){
int num=1;
//int space=3;
    for(int i=5;i>=1;i--){

        for (int j = 5; j >=i; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<num;
            num++;
        }cout<<endl;
        //space--;
        num=1;;
    }
}