#include<iostream>
#include<cstring>
using namespace std;
class Names{
    public:
    string frnd;
   string frnd2;
    string st;
    string s1;
    string s2;
string s3;
int i;
   void friendName(){
        frnd="Meenu";
        
       frnd2="minuw";
       st=frnd+frnd2;
       s1.assign("minakshi");
       s2="mina";
       s2.insert(4,"miss");
       s3="this is my program";
        i=s3.find("my");

    }
    
    void dis(){
        cout<<"concanate string:"<<" "<<st<<endl;
        cout<<s1<<" "<<s2<<endl;
        cout<<"this is find function"<<i;
       
    }
};
int main(){
    Names n;
    n.friendName();
   
    n.dis();
    
}