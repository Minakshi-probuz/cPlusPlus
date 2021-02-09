#include<iostream>
#include<string.h>
using namespace std;
class company{
    public:
    string name;
    int department;
    void company1(){
         cout<<"enter department"<<endl;
         cin>>department;
         cout<<"enter name of department"<<endl;
         cin>>name;
      cout<<"company name is:"<<name<<endl;
      cout<<"in company department is:"<<department<<endl;
     }
};
class employee:public company{
    public:
    int id;
    char name[20];
    int contactNo;
    void set(){
        cout<<"enter employee id:"<<endl;
        cin>>id;
        cout<<"enter name of employee:"<<endl;
        cin>>name;
        cout<<"enter mobile number of employee:"<<endl;
        cin>>contactNo;
    }
    void get(){
        cout<<"id is:"<<id<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"mobile no. is:"<<contactNo<<endl;
    }

};
class salary:public employee{
    public:
    int sal;
    void setsal(){
        cout<<"enter salary of employee:"<<endl;
        cin>>sal;

    }
    void getsal(){
        cout<<"salary is:"<<sal;
    }
};
int main(){
    employee e1;
    e1.company1();
    salary s1;
    e1.set();
    e1.get();
    s1.setsal();
    s1.getsal();
}

