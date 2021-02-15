#include<iostream>
using namespace std;
int main(){
    int n=1;
    char ch='A';
    char ch1='b';
    for(int i=1;i<=2;i++)
    {
         
         cout<<ch;
           
        for(int j=1;j<=5;j++)
        {
           if(j<3)
           {
               cout<<ch1;
               ch1++;
           }
           else
           if(j<4)
           {
               ch+=3;
               cout<<ch;
           }else if(j<5)
           {
               ch1++;
               cout<<ch1;
           }
               
        
            
            
        }


        
          cout<<endl;
        for(int n=1;n<=5;n++)
        {
           cout<<n;
            
        }
        ch1='b';
        ch='A';
        n=1;
        
        
        
       
        cout<<endl;

   
    }
}