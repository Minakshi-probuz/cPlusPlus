#include<iostream>
using namespace std;
class pattern3{
    public:
    int lines=4;
    int count=1;
    int num=1;
    void set()
    {
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=count;j++ )
        {

            cout<<num;
            num++;
            
               
        }
        cout<<endl;
        count++;
        num=1;
    
       //num+;
     //c;
    }
    }
};
int main(){
    pattern3 p;
    p.set();
}