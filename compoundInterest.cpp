#include<iostream>
#include<math.h>
using namespace  std;
double compound;
void CompInterest();
void CompInterest(){
double p=10000,r=10.25,t=5;
 
 compound=p*(pow((1 + r/100), t));
}
int main(){

CompInterest();
cout<<"compound interest is:"<<compound;
}

    


