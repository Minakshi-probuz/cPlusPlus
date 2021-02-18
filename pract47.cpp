#include<iostream>
using namespace std;
int main(){
int   z=1; 
int k;
    int space=3;
    int num=1;
    for(int i=1;i<=4;i++){
   
        for(int j=space;j>=1;j--){

            cout<<" ";
        }
        for(k=z;k>=1;k--){

            cout<<abs(k-i);
           
        }cout<<endl;
       // num--; 
       
        z+=2;
        space--;
    }
}