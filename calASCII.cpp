#include<iostream>
#include<conio.h>
using namespace std;
int asc();
int value;
int asc(){
    cout<<"entre value/symbol/digit/alphabet:"<<endl;
    value=getch();
    return value;
} int main(){
    asc();
    cout<<"ASCII value is:"<<""<<value <<endl;
}