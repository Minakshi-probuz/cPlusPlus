#include<iostream>
using namespace std;
class pattern2{
    public:
    int lines=3;
    int numcount=5;
    int num=1;
    
    void set(){
     for(int i=1;i<=3;i++){
         for(int j=1;j<=5;j++){
             cout<<num;
             num++;
         }
         cout<<endl;
         num=1;
     }

    }
    
};
int main(){
    pattern2 p;
    p.set();
}