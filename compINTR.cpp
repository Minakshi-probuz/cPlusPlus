#include<iostream>
#include<math.h>
using namespace  std;
double compound;
int CompInterest(double p,double r,double t);
int CompInterest(double p,double r,double t){
//double p=10000,r=10.25,t=5;
 
 compound=p*(pow((1 + r/100), t));
 return compound;
}
int main(){

CompInterest(10000,10.25,5);
cout<<"compound interest is:"<<compound;
}

    


