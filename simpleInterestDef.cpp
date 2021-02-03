#include<iostream>
using namespace std;
int interest(int p,int n,int r=7);
float SI;
int main(){

interest(3000,5);
cout<<"simple interest:"<<SI;
}
int interest(int p,int n,int r){

SI=p*n*r/100;
return SI;


}