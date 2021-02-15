#include<iostream>
#include<string>
using namespace std;
class test{
public:
    char a1[6]={'A','b','c','D','e'};
    int a2[5]={1,2,3,4,5};
    void dis(){
     for(int i=0;i<=4;i++){
         cout<<a1[i];
     }
     cout<<endl;
     for(int j=0;j<=4;j++){
         cout<<a2[j];
     }
     cout<<endl;
}

};
int main(){
    test t;
    t.dis();
    t.dis();
}