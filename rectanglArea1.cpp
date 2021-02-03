#include<iostream>
using namespace std;
int rectangle;
int rect(int l,int b);

int rect(int l,int b){
    
    
    rectangle=l*b;
    return rectangle;
}
int main(){
    rect(10,2);
   
    
    cout<<"area of rectangle:"<<rectangle;
}