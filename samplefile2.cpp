#include<fstream>
#include<iostream>
using namespace std;
    int main()
    {
        char str[2000];
        fstream file_op("D:\\sample\\minu.txt",ios::in);
       /* while(file_op >> str)
             cout<< str ;        

            file_op.close();*/
             while(!file_op.eof()) 
        {
              file_op.getline(str,2000);
              cout <<str;
        }         file_op.close();
        cout <<endl;

        return 0;
    }