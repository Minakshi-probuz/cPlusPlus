#include<iostream>
using namespace std;
class one{
    public:
   virtual void dis(){
        cout<<"hello";
    }
};
class two:public one{

public:
    void dis(){
        cout<<"minu";

}
};
int main(){
one ob,*obpt;
obpt=&ob;
obpt->dis();
two t;
obpt=&t;
obpt->dis();


}