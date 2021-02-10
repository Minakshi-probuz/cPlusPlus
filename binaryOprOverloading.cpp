#include<iostream>
using namespace std;
class Bintest{
    public:
    int a,b;

void set(int x,int y){
    a=x;
    b=y;
}
void operator +(Bintest cbi)
{
    int c=a+cbi.a;
    int d=b+cbi.b;
    cout<<c<<d;
}
void dis(){
    cout<<a<<b;
}


};
int main(){
    Bintest b1,b2;
    b1.set(5,2);
    b2.set(3,5);
    b1+b2;
   // b3.dis();
}