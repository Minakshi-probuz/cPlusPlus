#include<iostream>
using namespace std;
class  employee{
    public:
    int e_id;
    string e_name;
    int Salary;
    void Information(){
        cout<<"enter employee id:"<<endl;
        cin>>e_id;
        cout<<"enter employee name:"<<endl;;
        cin>>e_name;
        cout<<"enter employee salary:"<<endl;
        cin>>Salary;

    } 
    void getData()
    {
        cout<<"employee id:"<<e_id<<endl;
        cout<<"employee name:"<<e_name<<endl;
        cout<<"employee salary:"<<Salary<<endl;
        
    }
        
    
};
int main(){
    employee e1;
   
    e1.Information();
    e1.getData();
}