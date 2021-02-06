#include<iostream>
using namespace std;
class Online{
    public:
    int a,b;

    public:
    void setData(int x,int y);
    Online add(Online o1);
    void getData();
    
};
void Online::setData(int x,int y){
        a=x;
        b=y;
    }
    Online Online::add(Online o1){
            Online on1;
        on1.a=a+o1.a;
        on1.b=b+o1.b;
        return (on1);
    }
    void Online::getData(){
       
        
        cout<<"addition of two objects:"<<a<<"  "<<b<<endl;
    }
int main(){

    Online ob1,ob2,ob3;
    ob1.setData(10,5);
    ob2.setData(2,1);
    ob1.getData();
    ob3=ob1.add(ob2);
    ob3.getData();


}