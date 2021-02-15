/*
*
* *
* * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;
int main(){

    int lines=8;
    int starcount=1;
    int mid=(lines+1)/2;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=starcount;j++){

            cout<<"* ";
        }cout<<endl;
        if(i<mid){
            starcount++;
        }else
        {
            starcount--;
        }
        
    }/*for(int i=1;i<=lines;i++){
        for(int j=1;j<=i;j++){

            cout<<"* ";
        }cout<<endl;
        if(i<mid){
            starcount--;
        }else
        {
            starcount++;
        }*/
        
    
}