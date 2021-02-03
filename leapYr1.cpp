#include<iostream>
using namespace std;
int leap1(int y);

int leap1(int y){
    
   //// cout<<"enter year=";
   // cin>>year;
    if(y%4==0){
        cout<<"this is leap year";
    }else cout<<"this not the leap year";
    return y;
}
int main(){
    leap1(2019);
}