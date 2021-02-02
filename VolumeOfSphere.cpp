#include<iostream>
using namespace std;
void volume();

void volume(){
    float r=5;
    float pi=3.14;
    
    float vol=(4/3)*(pi*r*r*r);
    cout<<"Volume of sphere:"<<vol;

}
int main()
{
    volume();
}