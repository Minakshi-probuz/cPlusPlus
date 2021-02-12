#include<fstream>
#include<iostream>
using namespace std;
    int main()
    {
        char str[2000];
      /* fstream file_op("D:\\c c++\\area1.cpp",ios::in);
       while(file_op >> str)
             cout<< str ;        

            file_op.close();
           /*  while(!file_op.eof()) 
        {
              file_op.getline(str,2000);
              cout <<str;
        }         file_op.close();
        cout <<endl;*/
       // fstream file_op("c:\\CoderSource_file.txt",ios::out);

               fstream file_op("D:\\sample\\minu.txt",ios::out);//write


        file_op<<"Test Write to file";
        file_op<<"hello";
        file_op.close();

        
    }