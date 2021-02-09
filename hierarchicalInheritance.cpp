#include<iostream>
#include<strings.h>
using namespace std;
class college      //parent class
{
    public:
    string name;
    string address;
    void set(){
        cout<<"enter college name:"<<endl;
        cin>>name;
        cout<<"enter address of college:"<<endl;
        cin>>address;
    }
    void get(){
        cout<<"college name and address:"<<name<<"   "<<address<<endl;

    }

}; 

class department:public college//base class and parent class
{
    public:
    int department1;
    string depart_name;
    void inf(){
        cout<<"enter how many departments in college:"<<endl;
        cin>>department1;
        cout<<"enter department names: "<<endl;
        cin>>depart_name;
    }
    void inf2(){
        cout<<"department and name"<<department1<<"  "<<depart_name<<endl;
    }
};
class student:public college//base class parent class
{
    public:
    int id;
    string name;
    void set1(){
        cout<<"enter id of student:"<<endl;
        cin>>id;
        cout<<"enter student name:"<<endl;
        cin>>name;
    }
        void get1(){
            cout<<"student id and name is:"<<id<< "  "<<name<<endl;

    
    }
};
int main()
{
    department d;
    student s;
    d.set();
    d.get();
    d.inf();
    d.inf2();
    s.set1();
    s.get1();
    
}