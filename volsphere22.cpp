#include<iostream>
using namespace std;
int volume(int r);

int volume(int r){
    //float r=5;
    float pi=3.14;
    
    float vol=(4/3)*(pi*r*r*r);
    cout<<"Volume of sphere:"<<vol;
    return vol;

}
int main()
{
    volume(5);
}