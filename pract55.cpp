#include<iostream>

using namespace std;
int main(){
     int line=4;
    char ch='A';
    int space=3;
    int z;
    z=line*2-1;
    
    for(int i=4;i>=1;i--){
   
   
        for(int j=space;j>=i;j--){

            cout<<" ";
        

           
        }for(int k=1;k<=z;k++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
       z-=2;
       ch-=2;
       ch='A'; 
       
      
        
        
    }
}