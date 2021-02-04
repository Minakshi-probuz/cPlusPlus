#include<iostream>
using namespace std;
int interest(int p,int r,int t);
float SI;
int main(){
interest(30000,4,1);
cout<<"simple interest:"<<SI;
}
int interest(int p,int r,int t){

SI=p*r*t;
return SI;


}







