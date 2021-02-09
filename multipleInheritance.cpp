#include<iostream>
#include<string.h>
using namespace std;
class Bank{
    public:
    int amount;
   int totalAmount;
    void deposite(){
        cout<<"how many amount want to deposite:"<<endl;
        cin>>amount;

    }
    void checkAmount(){
        totalAmount=amount;
        cout<<"check total amount:"<<totalAmount<<endl;
        
    }
};
class transaction{
    public:
    string transaction1;
    void trans(){
    cout<<"start your transaction press any key:";
    cin>>transaction1;
    cout<<"-------------------------------------"<<endl;
    }
};




class nextTrans:public Bank,public transaction
{
    public:
    int money;
   int bal;
    void withdraw()
    {
        cout<<"enter how many amount withdraw:"<<endl;
        cin>>money;
       
       
         bal=totalAmount-money;
         cout<<"current balance is:"<<bal;
        // cin>>bal;
        
    }
};
int main(){
    nextTrans T;
    T.deposite();
    T.checkAmount();
    T.trans();
    T.withdraw();
    
}