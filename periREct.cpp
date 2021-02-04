#include<iostream>
using namespace std;
int peri(int x,int y);
float periMeter;
int peri(int x,int y){
periMeter=2*(x+y);
return periMeter;
}
int main(){
    peri(20,23);
    cout<<periMeter;
}