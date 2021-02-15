/*
      *
     * *
    * * *
   * * * *
  * * * * *
   */


#include<iostream>
using namespace std;
int main(){

int space=4;

int i=5;
for(i=1;i<=5;i++)//outer
 {

    for(int j=1;j<=space;j++)//space loop
    {
        cout<<" ";
    }
    for(int k=1;k<=i;k++)//print loop
    {
        cout<<"* ";//* and space "* "
    }
    cout<<endl;
    space--;//decrese space;


  }
  }
