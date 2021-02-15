/*
 1
222  
33333
*/


#include<iostream>
using namespace std;
class test{

    public:
     int starcount=1;
     int spacecount=2;
     int lines=3;
     int num=1;
       void set(){
     for(int i=1;i<=lines;i++){

         for(int j=1;j<=spacecount;j++){

             cout<<" ";
         }
         for(int k=1;k<=starcount;k++){

             cout<<num;
         }
         cout<<endl;
         spacecount--;
         starcount=starcount+2;
         num++;
     }
       }
     
};
int main(){

    test t;
    t.set();
}