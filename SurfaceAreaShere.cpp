#include<iostream>
using namespace std;
void spher(int r);
float sp;
int main(){
    spher(2);
    cout<<"Area of sphere:"<<sp;

}
void spher(int r)
{
    float pi=3.14;
    sp=4*pi*r;
}