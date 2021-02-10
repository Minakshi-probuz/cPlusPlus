#include<iostream>
using namespace std;
class Bintest{
    public:
      string a,b;

void set(string x,string y){
    a=x;
    b=y;
}
void operator +(Bintest cbi)
{
    string c=a+cbi.a;
    string d=b+cbi.b;
    cout<<c<<endl;
    cout<<d;
}
void dis(){
    cout<<a<<endl;
    cout<<b;
}


};
int main(){
    Bintest b1,b2;
    b1.set("minu","shubhu");
    b2.set("waghmare","mohije");
    b1+b2;
   // b3.dis();
}