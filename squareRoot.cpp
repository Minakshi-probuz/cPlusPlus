#include<iostream>
#include<math.h>
using namespace std;
int square_root;
void sqRoot();
void sqRoot(){
    int  number=9;
    square_root=pow(number,0.5);

}
int main(){
    sqRoot();
    cout<<"square root is:"<< " "<<square_root;
}