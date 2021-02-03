#include<iostream>
using namespace std;
int area(int r);
int main()
{
    
    area(5);
}
int area(int r){


float pi=3.14;  
int c=pi*r*r;
cout<<"area of circle:"<<""<<c;
return c;
}