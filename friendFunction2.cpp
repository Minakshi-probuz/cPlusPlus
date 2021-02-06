#include<iostream>
using namespace std;
class rectangle;
class circle{

    public:
    int l;
    
    friend void fun(circle,rectangle);
    void setData(int x)
    {
       l=x;
    }
};
class rectangle{

    public:
        int b;
void getData(int y){
       b=y;
    }
      
     friend void fun(circle,rectangle);
    
};

void fun(circle c,rectangle d){
     cout<<"area of circle"<<c.l+d.b;
   
}

    
    int main(){
          circle c;
        rectangle d;
        
        c.setData(5);
        d.getData(5);
        fun(c,d);
        return 0;
    }



