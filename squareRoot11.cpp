#include<iostream>
#include<math.h>
using namespace std;
int square_root;
int sqRoot();
int sqRoot(){
    int  number=9;
    square_root=pow(number,0.5);
    return square_root;

}
int main(){
    sqRoot();
    cout<<"square root is:"<< " "<<square_root;
}