#include<iostream>
using namespace std;
int spher(int r);//4*pi*r
float sp;
int main(){
    spher(2);
    cout<<"Area of sphere:"<<sp;

}
int spher(int r)
{
    float pi=3.14;
    sp=4*pi*r;
    return sp;
}