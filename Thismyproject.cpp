#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//void question();
class exam{
public:
void option();
 void questions();
void score();
 void view();
 void back();
int z,r;
   // int score;
    int count=0;
    int countr;
     int scor;
char ch;
     int i;
     int x,y;
    char usr[10]={"minakshi"};
    char pass[10]={"minu"};
    char us[10];
    char pas[10];

    void set(){
cout<<"enter your name:";
cin>>us;
cout<<"enter your password:";
int c=0;
  for(;ch!='\r';){
    ch=getch();
    pas[c]=ch;
    c++;
    cout<<"*";
  }
  c=c-1;
  pas[c]='\0';
  cout<<pas;

    x=strcmp(us,usr);
    y=strcmp(pas,pass);
    if((x==0)&&(y==0))
    {
      
       cout<<"login successful"<<endl;
       
        void option();
        system("cls");
  
      }else
      {
       cout<<"wrong!";
       exit(0);
      
      }
    
    }
    
};

 
void  exam::option(){



cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
cout<<"1.press s for start  quize"<<endl;;
cout<<"2.press n for exit  quize"<<endl;
cout<<"3.press v for view  score"<<endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
cout<<"enter your choice"<<endl;

char choice=toupper(getch());

if(choice=='N'){

          cout<<"---------------------------------------------------------------------------------------\n";
         cout<<"---------------------------------------------EXIT!---------------------------------------\n";
         back();
        // system("cls");
      
     }else
     if(choice=='V'){
        
        view();
      
        
     }else
     if(choice=='S'){
       void questions();
       
     system("cls");
     } 
}

void exam::questions()
{
     cout<<"\n****************************************************************************\n";
       cout<<"------------------------------WELCOME-------------------------------------------------";
  for( i=1;i<=10;i++)
  {
       z=i;

       switch(z)
       {
         case 1:
               cout<<endl<<"1)An integer can be?"<<endl;
               cout<<endl<<"a. Only positive\t\t" <<"b. Only Negative"<<endl<<"c. Both positive and negative\t\t" <<" d. None of the above\n\n";
                 if(getch()=='c'){
                   cout<<"\t\t\t Correct!"<<endl;
                   cout<<"-----------------------------------------------------------------------------------"<<endl;
                    cout<<"please enter any key for next question"<<endl;
                    count++;

                 }else{
                    cout<<"\n wrong! correct answer is C.\n";
                    cout<<"----------------------------------------------------------------------------------------"<<endl;
                     cout<<"please enter any key for next question"<<endl;
                     
                      }
                 getch();
                 system("cls");
                  break;
           
           case 2:
             
              cout<<endl<<"2)Naoroji was ________ settled in London."<<endl;
               cout<<endl<<"a. businessman and publicist\t\t"<<" b. an artist"<<endl <<"c. an educationist\t\t "<<"d. none of these\n";
                 if(getch()=='a'){
                   cout<<"\t\t\t Correct!"<<endl;
                   cout<<"-----------------------------------------------------------------------------------"<<endl;
                    cout<<"please enter any key for next question"<<endl;
                    count++;

                 }else{
                    cout<<"\n wrong! correct answer is a.\n";
                    cout<<"----------------------------------------------------------------------------------------"<<endl;
                     cout<<"please enter any key for next question"<<endl;
                     
                      }
                 getch();
                 system("cls");
                  break;
              
              case 3:

               cout<<"\n\n3)Second World War ended in\n";
                   cout<<endl<<"a. 1910\t\t "<<"b.1920"<<endl<<" c.1945\t\t"<<" d.1947\n\n";
                   if(getch()=='d'){
                      cout<<"\t\t\tcorrect!\n";
             cout<<"--------------------------------------------------------------------------------------------------------------\n";
                     cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is d\n";
                    cout<<"--------------------------------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
               
                
                }
                getch();
                system("cls");
                break;
           case 4:
                 cout<<"\n\n4)Hindustan Socialist Republic Association was related with the nationalist\n";
                   cout<<"\n\na. Lala Lajpat Rai\t\t"<<" b.Balgangadhar Tilak"<<endl<<" c.Bhagat Singh\t\t" <<"d. None of these\n\n";
                   if(getch()=='c'){
                       cout<<"\t\t\tcorrect!\n";
             cout<<"--------------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is c\n";
                    cout<<"-----------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
                
                 }
                getch();
                system("cls");
                break;
            case 5:

             cout<<"\n\n 5)Who established Natal Congress?\n";
                   cout<<"\n\na. Jawaharlal Nehru\t\t"<<" b.Balgangadhar Tilak"<<endl<<" c.Mahatma Gandhi\t\t "<<"d. None of these\n\n";
                   if(getch()=='c'){
                       cout<<"\t\t\tcorrect!\n";
     cout<<"--------------------------------------------------------------------------------------------------------------\n";
cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is c\n";
                    cout<<"--------------------------------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
                }
               getch();
               system("cls");
                break;

            case 6:
                   cout<<"\n\n6)Lala Lajpat Rai was a nationalist from?\n";
                   cout<<"\n\na. Bangal\t\t"<< "b.Bihar"<<endl<<" c.Haryana\t\t "<<"d. Punjab\n\n";
                   if(getch()=='d'){
                       cout<<"\t\t\tcorrect!\n";
             cout<<"-----------------------------------------------------------------------------------------------\n";
              cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is d\n";
                    cout<<"------------------------------------------------------------------------------------------\n";
                  cout<<"please enter any key for next question";
                }
                getch();
                system("cls");
                break;
        
         case 7:
         cout<<"\n\n7)Marathi newspaper Kesari was edited by\n";
        cout<<"\n\na. Jawaharlal Nehru\t\t"<< "b.Balgangadhar Tilak"<<endl<<"c.Mahatma Gandhi\t\t"<< "d. None of these\n\n";

                   if(getch()=='b'){
                       cout<<"\t\t\tcorrect!\n";
         cout<<"-----------------------------------------------------------------------------------------------------\n";
         cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is b\n";
                    cout<<"-----------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
                }
                getch();
                system("cls");
                break;

          case 8:
             cout<<"\n\n8)The Vernacular Press Act was enacted in\n";
             cout<<"\n\na. 1840\t\t"<<" b.1857"<<endl<<" c.1878\t\t"<<" d. 1890\n\n";

                   if(getch()=='c'){
                       cout<<"\t\t\tcorrect!\n";
             cout<<"------------------------------------------------------------------------------------------------\n";
            cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is c\n";
                    cout<<"------------------------------------------------------------------------------------------\n";
               cout<<"please enter any key for next question";
                }
                getch();
                system("cls");
                break;


       case 9:
           cout<<"\n\n9)Ilbert Bill was introduced in\n";
           cout<<"\n\na. 1883\t\t"<<" b.1857"<<endl<<"c.1878\t\t"<<"d. 1890\n\n";

                   if(getch()=='a'){
                       cout<<"\t\t\tcorrect!\n";
    cout<<"-------------------------------------------------------------------------------------------------------\n";
    cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is a\n";
                    cout<<"-----------------------------------------------------------------------------------------\n";
                cout<<"please enter any key for next question";
                  }
               getch();
               system("cls");
              break;
case 10:
                  cout<<"\n\n10)Bengal was divided by the British in the year\n";
                   cout<<"\n\na. 1900\t\t"<< "b.1910"<<endl<<"c.1920\t\t"<<" d.1905\n\n";
                   if(getch()=='d'){
                       cout<<"\t\t\tcorrect!\n";
            cout<<"----------------------------------------------------------------------------------------------\n";
                       cout<<"please enter any key for next question";
                    count++;
                  }else{
                    cout<<" \nwrong! correct answer is d\n";
                    cout<<"---------------------------------------------------------------------------------------\n";
    

                
                }
                getch();
                system("cls");
                break;
             }
              
            }cout<<"your score is:"<<count*10<<endl;
            option();
           
         } 



void exam::score()
{
//system("cls");
	scor=count*10;
	if(scor>0 && scor<100)
	{
	  cout<<"\n\n**********************************************************";
	     cout<<"\n\t\t YOUR SCORE IS:"<<scor<<endl;
       
       
       }else
{
	 cout<<"\n\n\t******** SORRY YOU DIDN'T WIN ********\n";
	   // cout<<"\n\t\t Thanks for your participation";
     cout<<"your score is:"<<scor<<endl;
     
	    }
      option();
    
} 


void exam::view(){
score();
//cout<<"this is your score\n";
//system("cls");

}

void exam::back()
{
  exit (0);
  //void option();

}




                  
     
     


int main(){
    exam e;
  e.set();
  e.option();
   e.questions();
  e.score();
 e.view();
 e.back();
}