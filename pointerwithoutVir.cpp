#include<iostream>
using namespace std;
class one{
    public:
    void dis(){
        cout<<"hello";
    }
};
int main(){
one ob,*obpt;
obpt=&ob;
obpt->dis();

}