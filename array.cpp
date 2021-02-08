#include<iostream>
using namespace std;
int main(){
    int j=0;
    int marks[]={23,20,56,82,69};
    int m1[]={11,22,33,14};
    int maths[4];
    maths[0]=150;
    maths[1]=200;
    maths[2]=250;
     cout<<maths[2]<<endl;
    cout<<maths[0]<<endl;


while(j<5)
{
    cout<<"marks is" <<" "<<marks[j]<<endl;
    j++;
}
    

    //can change the value
    marks[2]=3000;
    cout<<marks[2]<<endl;
    for(int i=0;i<4;i++){
        cout<<"the value of m1 is "<<m1[i]<<endl;
    }
        return 0;
}