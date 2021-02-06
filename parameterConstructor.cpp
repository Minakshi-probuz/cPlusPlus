#include<iostream>
using namespace std;
class ParameterCon{
     
    public:
    int a,b;
    ParameterCon(int x,int y){
        a=x;
        b=y;
       // void dis(){
        cout<<"enter two numbers";
        cin>>a>>b;
        
    }
};
int main(){
    ParameterCon p(5,8);
     cout<<p.a<<" "<<p.b;
      return 1;
}