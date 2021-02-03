#include<iostream>
using namespace std;
void percent(double value,double Total_volue);
    double percentage;

void percent(double value,double Total_volue){
    
    percentage=(value/Total_volue)*100;
}
int main(){
    percent(352,600);
    cout<<"percenatage is:"<<" "<<percentage;
}
