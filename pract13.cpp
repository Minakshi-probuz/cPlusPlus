/*
1
23
456
78910
1112131415
*/



#include<iostream>
using namespace std;
int main()
{


    int lines=5;
    int starcount=1;
    int num=1;
    for(int i=1;i<=lines;i++){

        for(int j=1;j<=i;j++){

            cout<<num;
            num++; 
        }
        cout<<endl;
        
        
    }
}