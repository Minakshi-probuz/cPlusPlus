#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
int sum(int a,int b,int c,int d);
int sum(int a,int b,int c,int d,int e);
int s,t,j,r,x;
int sum(int a,int b){
return(a+b);
}
int sum(int a,int b,int c){
    return(a+b+c);
}
int sum(int a,int b,int c,int d){
    return(a+b+c+d);
}
int sum(int a,int b,int c,int d,int e){
return(a+b+c+d+e);
}
int main(){
   // cout<<"enter which function want:";

   /* int sum=cout<<total(5,40);
    int sum1=cout<<total(10,20,30);
    int sum2=cout<<total(11,20,30,36);
    int sum3=cout<<total(10,20,30,40,50);*/
    int n,a[5];
    char ch='y';
    int count=0;
    
    while (ch=='y'|| ch=='Y'){
        cout<<"enter the numbers"<<endl;
        cin>>n;
        cout<<"press y to continue";
        cin>>ch;
        a[count]=n;
        count++;
    }
    for(int i=0;i<count-1;i++){
        cout<<a[i];
    }
    cout<<count;
    
    switch(count){
        case 2:
        x=sum(a[0],a[1]);
        cout<<x;
        break;
        case 3:
        r=sum(a[0],a[1],a[2]);
        cout<<r;
        break;
        case 4:
        j=sum(a[0],a[1],a[2],a[3]);
        cout<<j;
        break;
        case 5:
        t=sum(a[0],a[1],a[2],a[3],a[4]);
        cout<<t;
        break;
        
    }
    getch();
}

 