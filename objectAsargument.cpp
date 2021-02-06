#include<iostream>
using namespace std;
class test{
    public:
    int a;
   
    void set(int x)
    {
    a=x;
   
}
    void get(test t1){
   // cout<<"object as argument"<<t1.a<<endl;
   
 int  r=t1.a+t1.a;
 cout<<"Object as argument:"<<r;
}
};

int main(){
    test t1;
    t1.set(5);
    t1.get(t1);
    
    
    }