/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/



#include<iostream>
using namespace std;
class pattern3{
    public:
    void set(){
    for(char i='A';i<='E';i++){
        for(char j='A';j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
    }
};
int main(){
    pattern3 p;
    p.set();
}