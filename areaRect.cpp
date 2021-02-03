#include<iostream>
using namespace std;
int rectangle;
int rect();

int rect(){
    int l=10;
    int b=2;
    
    rectangle=l*b;
    return rectangle;
}
int main(){
    rect();
   
    
    cout<<"area of rectangle:"<<rectangle;
}