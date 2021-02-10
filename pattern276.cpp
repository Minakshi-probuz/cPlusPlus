#include<iostream>
using namespace std;
class pattern3{
    public:
    int lines=3;
    int count=5;
    void set()
    {
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++ )
        {

            cout<<"* ";
        }
        cout<<endl;
    }
    }
};
int main(){
    pattern3 p;
    p.set();
}