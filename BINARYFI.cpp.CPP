#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class student
{
int rno;
char name[20];
public:
void get()
{
cout<<"enter roll number ";
cin>>rno;
cout<<"enter name ";
gets(name);
}
void show()
{
cout<<"details are:";
cout<<"roll number:"<<rno;
cout<<"name:";
puts(name);
}
int retrno()
{
return rno;
}
}s;
void add_data ()
{
fstream f;  char a;
f.open ("stud.dat",ios::binary| ios::out);
do
{
s.get();
f.write((char*)&s,sizeof(s));
cout<<"continue?";
cin>>a;
}while(a=='y'||a=='Y');
f.close();
}
void display()
{
fstream f;
f.open("stud.dat",ios::binary|ios::in);
while(f.read((char*)&s,sizeof(s)))
{s.show();
}
f.close();
}
void search()
{
fstream f;
f.open("stud.dat", ios::binary| ios::in);
int r;
cout<<"enter roll number to be searched";
cin>>r;
while(f.read((char *)&s, sizeof(s)))
{
if(r==s.retrno())
{
s.show();
}
f.close();
}
}
void del()
{
int rec;
fstream f;
fstream f1;
f.open("stud.dat",ios::binary|ios::in);
f1.open("stud1.dat",ios::binary|ios::out);
cout<<"enter record to be deleted";
cin>>rec;
while(f.read((char*)&s,sizeof(s)))
{
if(rec!=s.retrno())
f.write((char*)&s,sizeof(s));
}
remove("stud.dat");
rename("stud1.dat","stud.dat");
f1.close();
f.close();
}
void main()
{
clrscr();
int ch;
do
{
cout<<"\n1.Add data"
    <<"\n2.Display data"
    <<"\n3.Search data"
    <<"\n4.Delete data"
    <<"\n5.Exit"
    <<"\nEnter your choice";
cin>>ch;
switch(ch)
{
case 1: add_data();
break;
case 2: display();
break;
case 3: search();
break;
case 4: del();
break;
default:
cout<<"invalid choice";
}
}while(ch!=5);
getch();
}