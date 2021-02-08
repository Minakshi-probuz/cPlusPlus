#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:

    int id;
    string name,address;
    void set(){
        cout<<"enter student id=";
        cin>>id;
        cout<<"enter student name=";
        cin>>name;
        cout<<"enter address=";
        cin>>address;
       }
       void display(){
           cout<<"id:"<<id<<endl;
           cout<<"name:"<<name<<endl;
           cout<<"address is:"<<address<<endl;
       }
    
};
class exam:public student{
    public:
    string paper1;
    string paper2;
    void setpaper(){
        cout<<"enter paper1=";
        cin>>paper1;
        cout<<"enter paper2=";
        cin>>paper2;
    }
    void dispaper(){
        cout<<"paper one:"<<paper1<<endl;
        cout<<"paper two:"<<paper2<<endl;

    }
};
class sptMarks{
    
    public:
       int sportMark,sportMark1,sportMark2;
       void setMarks(){
           cout<<"enter sport marks=";
           cin>>sportMark;
          /* cout<<"enter sport marks1=";
           cin>>sportMark1;
           cout<<"enter sport marks2=";
           cin>>sportMark2;*/
    }

           
       
       void display2(){
           cout<<"sportmarks is:"<<sportMark<<endl;
                     \
       /*  cout<<"sportmarks is:"<<sportMark1<<endl;

           cout<<"sportmarks is:"<<sportMark2<<endl;*/

}
};
class result:public sptMarks
{
    public:
    int mark;
    //int totalMark;
    void totalMarks()
    {
     cout<<"enter total marks=";
     cin>>mark;
     
      // mark=sportMark+sportMark1+sportMark2;
       cout<<"total is:"<<mark;
    }
       
    
};
int main(){
   /* student s;
    s.set();
    s.display();
    s.setpaper();
    s.dispaper();
    */
   exam e;
   e.set();
   e.display();
   e.setpaper();
   e.dispaper();
    result r;
    r.setMarks();
    r.display2();
    r.totalMarks();
    
}