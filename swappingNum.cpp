#include<iostream>
using namespace std;
int swapping();
int swapping(){
   int a=10,b=15;
    
    
    int temp=a;
    a=b;
    b=temp;
    cout<<"swapping two numbers:"<<a<<" "<<b;
    return a,b;
}
int main(){
    swapping();
}