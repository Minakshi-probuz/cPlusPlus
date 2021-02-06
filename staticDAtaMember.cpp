#include<iostream>
using namespace std;
class account{
    public:
    int balance;
    static int payment;//static variable
    void setBalance(int b){
        balance=b;

    }
   static void setpay(int p)//static data function
   {
        payment=p;

    }
};
int account::payment;
int main(){
    account a,a1;
  //  a1.setpay(98);
    account::setpay(50);
    //a.balance;

    cout<<a.balance<<endl;
    cout<<a1.payment;
}