#include<iostream>
using namespace std;
class test{
    public:
    int a;
    int b;
    void set(){
        cout<<"enter value of a and b:"<<endl;
        cin>>a>>b;
    }
    void get(){
        int c=a+b;
        cout<<"addition of a and b:"<<c;
    }
};
class rate:public virtual test
{
    /*this virtual base class for avoid ambiguity
     (diamond) */
    
};
class tax:public virtual test{

};
class max:public virtual test,public  virtual rate{

};
int main(){
    tax t;
    t.set();
    t.get();
}
