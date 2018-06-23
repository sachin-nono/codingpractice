#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
void vowel();
void space();
void word();
void words();
void line();
void main()
{
clrscr();
ofstream f("out.txt");
f<<"My Name is Suhani.I take science stream ";

vowel();
space();
word();
words();
line();
f.close();
getch();
}
 void vowel()
{
 int vowel=0;
 char c;
 ifstream f("out.txt");
 while(!f.eof())
 {
  f>>c[;
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
   {
    vowel++;
    cout<<c;
   }
 }
 cout<<"\nwords starting with vowels :"<<vowel;
 f.close();
}

 void space()
{
 int space=0;
 char c;
 ifstream f("out.txt");
 while(!f.eof())
 {
  f.get(c);
  if(c==' ')
  space++;
 }
 cout<<"\n no. of spaces"<<space;
}

 void word()
{
 int word=0;
 char c[80];
 ifstream f("out.txt");
 while(!f.eof())
 {
  f>>c;
  if(c[0]>=65 && c[0]<=90)
  {
    word++;
    cout<<c;
  }
 }
 cout<<"\n no. of words: "<<word;
 f.close();
}
 void words()
{
 int w=0;
 char c[20];
 ifstream f("out.txt");
 while(!f.eof())
 {
  f>>c;
  for(int i=0;c[i]!='\0';i++)
  w++;
 }
 cout<<"number of words stored in the entered line"<<w;
}
 void line()
{
 int line=0;
 char c[80];
 ifstream f("out.txt");
 while(!f.eof())
 {
  f.getline(c,80);
  if(c[79]!='.')
  line++;
 }
 cout<<"number of lines"<<line;
}