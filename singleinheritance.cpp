#include<iostream>
using namespace std;
class home{
    public:
    int door;
    int windows;
    void set()
{
    cout<<"enter how many doors in house:"<<endl;
    cin>>door;
    cout<<"enter how many windows in house:"<<endl;
    cin>>windows;
}
void get(int x,int y){
  door=x;
  windows=y;
  int r=x+y;
  cout<<"windows nd doors in house is:"<<r<<endl;

}
};
class furniture:public home{
    public:
    int chair;
    int sofa;
    void set1()
    {
        
cout<<"enter chair and sofa :";
cin>>chair>>sofa;

    }
    void get2(){
        int total;
        total=chair+sofa;
        cout<<"total chair and sofa in house is:"<<total;
    }
};
int main(){
    furniture f;
    f.set();
    f.get(5,2);
    f.set1();
    f.get2();
}
