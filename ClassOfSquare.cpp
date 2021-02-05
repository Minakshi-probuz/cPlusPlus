#include<iostream>
using namespace std;
class Suqre{
    public:
    int s;
    int p;
    int sides(){
    
     cout<<"enter side";
     cin>>s;
      p=s*s;
     return p;
    }
    void show(){
        cout<<"squre of number is:"<<p;
    }
};
int main(){ 
    Suqre s1;
    s1.sides();
    s1.show();
    return 0;
}