#include<iostream>
#include<fstream>
using namespace std;
int main(){

    char str[2000];
    fstream firstfileopen("D:\\sample\\map1.txt",ios::in);
    fstream secondfileopen("D:\\sample\\map.txt",ios::out);
    while (!firstfileopen.eof())
    {
        firstfileopen.getline(str,2000);
        cout<<"first file data read:"<<str<<endl;
        secondfileopen<<str<<endl;
    }
    

}