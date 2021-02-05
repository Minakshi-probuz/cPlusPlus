#include<iostream>
using namespace std;
class rectangle{


public:
//float periMeter;
int peri(int x,int y){
    float periMeter;

periMeter=2*(x+y);
return periMeter;
}
};
int main(){
    rectangle r;
   // float perimeter;
  cout<<r.peri(20,23);
    
}