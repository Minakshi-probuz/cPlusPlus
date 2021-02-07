#include<iostream>
using namespace std;
class demo{
    public:
    int a,b;
    void set(int x,int y);
    void add(demo &cob2);
    void display();
};
void demo::set(int x,int y){
    a=x;
    b=y;
}
void demo::add(demo &cob2){
    cob2.a=2;
    cob2.b=5;
}
void demo::display(){
    cout<<a<<b<<endl;
}
int main(){
    demo d1;
    d1.set(4,5);
    d1.display();
    d1.add(d1);
    d1.display();
    
}