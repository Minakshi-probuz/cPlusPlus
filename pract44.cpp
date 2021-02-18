#include<iostream>
using namespace std;
int main(){

    
int num=1;
int space=3;
for(int i=1;i<=4;i++){


    for(int j=space;j>=1;j--)
    {

        cout<<" ";
    }
    for(int k=1;k<=(i*2)-1;k++){

        cout<<num;
        num+=1;
    }cout<<endl;
    num++;
    space--;
    num=1;
    //num+2;
    
}
}