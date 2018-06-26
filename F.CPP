/*Text in the xyz.txt file is
"Time is a great teacher but unfortunately it kills all its pupils."*/
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
void word()
{
  int word=0;
  char c[20];
  ifstream f("xyz.txt");
  if(!f)
  {
   cout<<"file not found";
   exit(0);
  }
  else
  while(!f.eof())
  {
   f>>c;
   word++;
  }
  cout<<"no. of words "<<word;
  f.close();
}
void lines()
{
  char c[80];
  int count=0;
  ifstream f("xyz.txt");
  if(!f)
  {
   cout<<"file not found";
   exit(0);
  }
  else
  while(!f.eof())
  {
   f.getline(c,80);
   if(c[0]!='\0')
   count++;
  }
  cout<<"no. of lines "<<count;
  f.close();
}
void space()
{
  int space=0;
  char c;
  ifstream f("xyz.txt");
  if(!f)
  {
   cout<<"file not found";
   exit(0);
  }
  else
  while(!f.eof())
  {
   f.get(c);
   if(c==' ')
   space++;
  }
  cout<<"no. of spaces : "<<space;
}
void vowels()
{
 int count=0;
 char c;
 ifstream f("xyz.txt");
 if(!f)
  {
   cout<<"file not found";
   exit(0);
  }
  else
 while(!f.eof())
 {
  f.get(c);
  if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  count++;
 }
 cout<<"no. of vowels "<<count;
 f.close();
}

void main()
{
 clrscr();
 int ch;
 ifstream f("xyz.txt");
do{
   cout<<"1.COUNT NUMBER OF WORDS \n"
       <<"2.COUNT NUMBER OF LINES \n"
       <<"3.COUNT NUMBER OF SPACES \n"
       <<"4.COUNT NUMBER OF VOWELS \n"
       <<"5.EXIT \n"
       <<" ENTER YOUR CHOICE : ";
   cin>>ch;

 switch(ch)
 {
   case 1:
     word();
     break;

   case 2:
     lines();
     break;

   case 3:
     space();
     break;

   case 4:
     vowels();
     break;
   case 5:
     exit(0);

   default:
    cout<<"invalid choice";
   }
  }while (ch!=5);

f.close();
getch();
}


