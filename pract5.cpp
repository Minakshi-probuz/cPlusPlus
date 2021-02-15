/*
Aaaaaa
Bbbbbb
Cccccc
Dddddd
*/





#include<iostream>
#include<string.h>
using namespace std;
class box{
    public:
   /* int line=4;
    int count=6;*/
 char ch=65;
 char ch1=96;
    void fun(){
    for(int i=1;i<=4;i++){
           cout<<ch;
           ch+=1;
           ch1+=1;
 
        for (int  j = 1; j <=5; j++)
        {
            cout<<ch1;
        }
        cout<<endl;
    }
    }
};
int main(){
   box b1;
   b1.fun(); 
}