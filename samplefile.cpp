#include<fstream>
#include<iostream>
using namespace std;
    int main()
    {
        char str[2000];
     /*  fstream file_op("D:\\sample\\swap.txt",ios::in);//for read file
        while(file_op >> str)
             cout<< str ;        

            file_op.close();*/

            fstream file_op("D:\\sample\\map.txt",ios::out);//for write file

        file_op<<"Test Write to file"<<endl;
        file_op<<"this is my file";
        file_op.close();


         /*  fstream file_op("D:\\sample\\swap.txt",ios::out);//for write file

        file_op<<"Test Write to file"<<endl;
        file_op<<"this is my file";
        file_op.close();*/

        return 0;
    }