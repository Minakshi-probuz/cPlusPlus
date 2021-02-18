#include<iostream>
using namespace std;
int main(){

    char ch='A';
int space=3;
for(int i=1;i<=4;i++){


    for(int j=space;j>=1;j--)
    {

        cout<<" ";
    }
    for(int k=1;k<=(i*2)-1;k++){

        cout<<ch;
        ch+=1;
    }cout<<endl;
    ch++;
    space--;
    ch='A';
    //num+2;

    
        
    
    
    
}
}