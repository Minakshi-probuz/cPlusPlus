#include<iostream>
using namespace std;
int swapping(int a,int b);
int swapping(int a,int b){
    //a=10,b=15;
    
    
    int temp=a;
    a=b;
    b=temp;
    cout<<"swapping two numbers:"<<a<<" "<<b;
    return a,b;
}
int main(){
    swapping(10,15);
}