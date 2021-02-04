#include<iostream>
using namespace std;
class home{
    static int table;
    public :
     static int y;
     void door(int table){
     cout<<home::table<<endl;
     cout<<table<<endl;
     }
};
int home::table=1;
int home::y=2;
int main(){
    home hm;
    int table=3;
    hm.door(table);
    cout<<home::y;
    return 0;
}