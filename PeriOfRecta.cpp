#include<iostream>
using namespace std;
void peri(int x,int y);
float periMeter;
void peri(int x,int y){
periMeter=2*(x+y);
}
int main(){
    peri(20,23);
    cout<<periMeter;
}