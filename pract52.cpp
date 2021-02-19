#include<iostream>

using namespace std;
int main(){
     int line=4;
    int num=1;
    int space=3;
    int z;
    z=line*2-1;
    
    for(int i=4;i>=1;i--){
   
   
        for(int j=space;j>=i;j--){

            cout<<" ";
        

           
        }for(int k=1;k<=z;k++){
            cout<<num;
            num++;
        }
        cout<<endl;
       z-=2;
       num=1; 
       
      
        
        
    }
}