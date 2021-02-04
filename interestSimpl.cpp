#include<iostream>
using namespace std;
int interest();
float SI;
int main(){
interest();
cout<<"simple interest:"<<SI;
}
int interest(){
int p=30000,r=4,t=1;
SI=p*r*t;
return SI;

}







