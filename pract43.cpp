#include<iostream>
using namespace std;
int main(){
int line=3;
int star=5;
//int num=1;
   char  ch='p';
int r=1;
int n=1;
for(int i=1;i<=line;i++){

    for(int j=1;j<=5;j++){

        if(i==1 || i==line ||j==1 || j==star){
         cout<<ch<<" ";
          }else
    {
        cout<<" "<<" ";
    }
    
    }
    

    cout<<endl;
    /*for(int k=1;k<=star;k++){
        cout<<ch;
    }*/
}
for(r=1;r<=3;r++){
    for(n=1;n<=r;n++){
        cout<<ch;
        }cout<<endl;
ch++;
ch='P';

}

}