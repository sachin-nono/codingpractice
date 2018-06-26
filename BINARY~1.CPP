#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class student
{
int rno;
char name[20];
public:
void get()
{
cout<<"Enter roll number: ";
cin>>rno;
cout<<"\nEnter name: ";
gets(name);
}
void show()
{
cout<<"Details are:";
cout<<"\nRoll number:"<<rno;
cout<<"\tName:";
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
cout<<"Continue?\n(Enter y or Y if Yes)";
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
cout<<"\nEnter roll number to be searched: ";
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
cout<<"\nEnter record to be deleted:";
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
cout<<"\n1.Add data."
    <<"\n2.Display data."
    <<"\n3.Search data."
    <<"\n4.Delete data."
    <<"\n5.Exit."
    <<"\nEnter your choice: ";
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
case 5: exit(9);
break;
default:
cout<<"Invalid Choice!!!";
}
}while(ch!=5);
getch();
}