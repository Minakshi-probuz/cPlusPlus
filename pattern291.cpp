#include<iostream>
using namespace std;
class pattern3{
    public:
    int lines=3;
    int count=5;
    char num='A';
    char num2='a';
    void set()
    {
    for(int i=1;i<=lines;i++)
    {
      cout<<num<<"";
        for(int j=1;j<=count-1;j++)
        {

            cout<<num2<<"";}

            num++;
            num2++;
           //cout<<num2;
           // num2++;
            cout<<endl;
               
        }
      
    
    }
};
int main(){
    pattern3 p;
    p.set();
}