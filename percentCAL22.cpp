#include<iostream>
using namespace std;
int percent();
    double percentage;

int percent(){
    double value=352,Total_volue=600;
    percentage=(value/Total_volue)*100;
    return percentage;
}
int main(){
    percent();
    cout<<"percenatage is:"<<" "<<percentage;
}
