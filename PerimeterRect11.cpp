#include<iostream>
using namespace std;
int peri();
float periMeter;
int peri(){
    int x=20,y=23;
periMeter=2*(x+y);
return periMeter;
}
int main(){
    peri();
    cout<<periMeter;
}