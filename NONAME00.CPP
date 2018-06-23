#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
void read();
void space();
void word();
void given();
void copy();
void main()
{
clrscr();
ofstream f("out.txt");
f<<"time is a great teacher but unfortunately it kills all its pupils";
f.close();
read();
space();
word();
given();
copy;
getch();
}
void read()
{ int count=0;
char c;
ifstream f("out.txt");
while(!f.eof())
{
 f.get(c);
 if(c>=65 && c<=90)
 count++;
 }
 cout<<"no. of alphabets"<<count;
 f.close();
}
void space()
{ int space=0;
  char c;
  ifstream f("out.txt");
  while(!f.eof())
  {f.get(c);
  if(c==' ')
  space++;
  }
}
void word()
{ int word=0;
  char c[80];
  ifstream f("out.txt");
  while(!f.eof())
  {f>>c;
  if(strcmpi(c,"is")==0)
  word++;
  }
  cout<<"no. of times of is"<<word;
  f.close();
}
void given()
{ char c[80],s;
  int character=0;
  ifstream f("out.txt");
  while(!f.eof())
  {f.getline(c,80);
  if(c[0]!=s)
  character++;
  }
  cout<<"no. of lines not starting with given character"<<character;
  f.close();
}
void copy()
 {char c[80];
  ifstream f("out.txt");
  ofstream f1("out.txt");
  while(!f.eof())
  {f.getline(c,80);
  if(c[0]!='A'||c[0]!='E')
  f1<<c;
  }
  f.close();
  f1.close();
  }