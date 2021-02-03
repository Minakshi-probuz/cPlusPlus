#include<iostream>
using namespace std;
void leap();

void leap(){
    int year;
    cout<<"enter year=";
    cin>>year;
    if(year%4==0){
        cout<<"this is leap year";
    }else cout<<"this not the leap year";
}
int main(){
    leap();
}