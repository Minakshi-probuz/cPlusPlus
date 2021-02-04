#include<iostream>
#include<math.h>
using namespace  std;
double compound;
int CompInterest();
int CompInterest(){
double p=10000,r=10.25,t=5;
 
 compound=p*(pow((1 + r/100), t));
 return compound;
}
int main(){

CompInterest();
cout<<"compound interest is:"<<compound;
}

    


