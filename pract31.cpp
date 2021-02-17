/*
EEEEE
 DDDD
  CCC
   BB
    A
*/


#include<iostream>
using namespace std;
int main(){
    char ch='E';
    int space=1;
    int i;
    for(int i=5;i>=1;i--){
        
         
     for(int j=4;j>=i;j--){

         cout<<" ";
        
     }
     
     for(int k=1;k<=i;k++){
        cout<<ch;
    
     }cout<<endl;
     
    // }
     //ch='E';
      ch--;
    }
}