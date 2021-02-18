#include<iostream>
using namespace std;
template<class t>
class one{

    public:
    t a,b,c;
    void set(){
        cout<<"enter a and b";
        cin>>a>>b;
    }
    void add(){
        c=a+b;
    }
    void dis(char st[])//print two different message
    {
        cout<<st<<" "<<c;
       
    }
};
int main(){

    one <int>ob;
    ob.set();
    ob.add();
    ob.dis("integer additon");//message 1
    one <float>ob2;
    ob2.set();
    ob2.add();
    ob2.dis("float addition");//message 2
}