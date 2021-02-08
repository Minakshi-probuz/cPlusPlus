#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class time{
     public:
     int hour1=0;
     int minute1=0;
     int second1=0;
    
     
     void Timing(time &,time &);
     void set(){
    cout<<"enter hours:"<<hour1;
    cin>>hour1;
    cout<<"enter minutes:"<<minute1;
    cin>>minute1;
    cout<<"enter second :"<<second1;
    cin>>second1;
    
}
     void time::Timing(time &t1,time &t2)
{
second1=t1.second1+t2.second1;
minute1=second1/60;
second1=second1%60;
minute1=t1.minute1+t2.minute1;
hour1=minute1/60;
minute1=minute1%60;
hour1=hour1+t1.hour1+t2.hour1;
}
void get()
{
    cout<<"hours"<<hour1<<" "<<"minutes"<<minute1<<"   "<<"second"<<second1<<endl;
}

     };


int main(){
    time t1,t2,t3;
    t1.set();
    t2.set();
    t1.get();
    t2.get();
    t3.Timing(t1,t2);
    t3.get();
    return 0;
  
}
