#include<iostream>
using namespace std;
class pattern3{
    public:
    int lines=4;
    int count=5;
    int num=5;
    void set()
    {
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=count;j++ )
        {

            cout<<num--;
        }
        cout<<endl;
       num=5;
    }
    }
};
int main(){
    pattern3 p;
    p.set();
}