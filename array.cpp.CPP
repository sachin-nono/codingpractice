
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class data
{
  char name[20];
  int std,rno;
  public:
  void take()
  {
     cout<<"enter name ";
     gets(name);
     cout<<"enter class ";
     cin>>std;
     cout<<"enter roll number ";
     cin>>rno;
     cout<<”\n”;
  }
  void show()
  {
    cout<<"\n name : ";
    puts(name);
    cout<<"class : "<<std;
    cout<<"\n roll number : "<<rno<<”\n”;
  }
}d;
void main()
{
 clrscr();
 char a='y';
 fstream f("record.dat", ios::in|ios::out|ios::binary|ios::app);
 while(a=='y')
 {
  d.take();
  f.write((char*)&d,sizeof(d));
  cout<<"\n do you want to enter again (y/n) \n";
  cin>>a;
 }
 f.seekg(0);
 while(f.read((char*)&d,sizeof(d)))
   {
    d.show();
   }
 f.close();
 getch();
}
