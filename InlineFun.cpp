#include<iostream>
using namespace std;
int result(int s);
int sum(int x,int y);
int main(){
   int i= result(5);
   int j= sum(5,5);
    cout<<i<<endl;
    cout<<j;
}
inline int result(int s){
    
  return s*s;
  /*in inline function we cannot 
  use any loop and condition statements*/
}
int sum(int x,int y)
{
    int a=x+y;
    return a;
}