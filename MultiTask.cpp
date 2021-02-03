#include<iostream>
using namespace std;
void add(int a,int b);
void sub(int x,int y);
void mul(int i,int j);
void divi(int s,int p);
int main(){
    add(5,10);
    sub(15,5);
    mul(20,2);
    divi(25,5);
}
void add(int a,int b){
    int addition;
    addition=a+b;
    cout<<"addition is:"<<addition<<endl;
}
void sub(int x,int y){
    int substraction;
    substraction=x-y;
    cout<<"substraction is:"<<substraction<<endl;

}
void mul(int i,int j){
    int multiply;
    multiply=i*j;
    cout<<"multiplication is:"<<multiply<<endl;

}
void divi(int s,int p){
    int division;
    division=s/p;
    cout<<"divison is:"<<division<<endl;

}