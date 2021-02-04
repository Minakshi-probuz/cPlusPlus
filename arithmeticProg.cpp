#include<iostream>
using namespace std;
int add();
int sub();
int mul();
int divi();
int main(){
    add();
    sub();
    mul();
    divi();
}
int add(){
    int a=5,b=10;
    int addition;
    addition=a+b;
    cout<<"addition is:"<<addition<<endl;
    return addition;
}
int sub(){
    int x=25,y=5;
    int substraction;
    substraction=x-y;
    cout<<"substraction is:"<<substraction<<endl;
    return substraction;

}
int mul(){
    int i=10,j=5;
    int multiply;
    multiply=i*j;
    cout<<"multiplication is:"<<multiply<<endl;
    return multiply;

}
int divi(){
    int s=20,p=5;
    int division;
    division=s/p;
    cout<<"divison is:"<<division<<endl;
    return division;

}