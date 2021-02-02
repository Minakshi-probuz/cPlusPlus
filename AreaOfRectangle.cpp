#include<iostream>
using namespace std;
int rectangle;
void rect(int l,int b);

void rect(int l,int b){
    
    
    rectangle=l*b;
}
int main(){
    rect(10,2);
   
    
    cout<<"area of rectangle:"<<rectangle;
}