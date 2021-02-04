#include<iostream>
using namespace std
int percent(double value,double Total_volue);
    double percentage;

int percent(double value,double Total_volue){
    
    percentage=(value/Total_volue)*100;
    return percentage;
}
int main(){
    percent(352,600);
    cout<<"percenatage is:"<<" "<<percentage;
}
