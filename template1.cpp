#include<iostream>
using namespace std;

/*template<class t>
t fun(t x,t y){
    return(x+y);
}*/

template<class t,class n>
t fun(t x,n y){
    return(x+y);
}
int main(){
cout<<fun(4.5,5);
return 0;

}