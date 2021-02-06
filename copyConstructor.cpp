#include<iostream> 
using namespace std;
class copyCon{
    public:
    int x,y;
          copyCon(int p,int q){
              x=p;
              y=q;
          }
          copyCon(copyCon &z){
              x=z.x;
              y=z.y;
          }
          void putData(){
              cout<<x<<" "<<y<<endl;
          }
};
int main(){
    copyCon con(10,20);//obj 1 created con
    copyCon con2(con);//obj con pass to obj2 i.e con2

    con.putData();//obj1 con is call putdata funtuction
    con2.putData();//obj2 con2 is calling putdata()
    copyCon con3=con2;//obj con2 is pass to obj3 con3
    con3.putData();//print con3
}