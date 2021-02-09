#include<iostream>
using namespace std;
class base{

    public:
    
    void set(){
        cout<<"i am engineer";
        
    }
};
class child:public base{
    public:
    
    void set(){
        base::set();
        cout<<" value of a";
       
}

};
int main(){
    child c;
    c.set();
    //c.set();
}