#include<iostream>
using namespace std;
int add(int a,int b);
int sub(int x,int y);
int mul(int i,int j);
int divi(int s,int p);
int main(){
    add(5,10);
    sub(15,5);
    mul(20,2);
    divi(25,5);
}
int add(int a,int b){
    int addition;
    addition=a+b;
    cout<<"addition is:"<<addition<<endl;
    return addition;
}
int sub(int x,int y){
    int substraction;
    substraction=x-y;
    cout<<"substraction is:"<<substraction<<endl;
    return substraction;

}
int mul(int i,int j){
    int multiply;
    multiply=i*j;
    cout<<"multiplication is:"<<multiply<<endl;
    return multiply;

}
int divi(int s,int p){
    int division;
    division=s/p;
    cout<<"divison is:"<<division<<endl;
    return division;

}