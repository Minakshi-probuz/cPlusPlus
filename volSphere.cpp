#include<iostream>
using namespace std;
int volume();

int volume(){
    float r=5;
    float pi=3.14;
    
    float vol=(4/3)*(pi*r*r*r);
    cout<<"Volume of sphere:"<<vol;
    return vol;

}
int main()
{
    volume();
}