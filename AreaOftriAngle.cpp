#include<iostream>
using namespace std;
void triangle(int a,int b);


void triangle(int a,int b){

float m=0.5;
    
    int Area_Trinagle=m*a*b;
cout<<"Area of triangle is:"<<""<<Area_Trinagle;
}

int main()
{
    triangle( 50,20);
    return 0;
}