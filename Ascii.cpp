#include<iostream>
#include<conio.h>
using namespace std;
void asc();
int value;
void asc(){
    cout<<"entre value/symbol/digit/alphabet:"<<endl;
    value=getch();
} int main(){
    asc();
    cout<<"ASCII value is:"<<""<<value <<endl;
}