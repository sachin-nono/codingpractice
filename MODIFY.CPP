#include<conio.h>
#include<fstream.h>

class student
{
private:
 int rno;
 char n[20];
 char add[50];

public:
 void get()
 {
  cout<<"enter roll no,name and address : ";
  cin>>rno>>n>>add;
 }
 void show()
 {
  cout<<"\nentered details";
  cout<<endl<<rno<<endl<<n<<endl<<add;
 }
};

void main()
{
 clrscr();
 student s;
 char ans;
 int rec_no;

 s.get();
 s.show();

 fstream f;
 f.open("student.dat",ios::binary|ios::out|ios::in);

 cout<<"\nenter record number=";
 cin>>rec_no;

 f.seekg((rec_no-1)*sizeof(s));
 f.read((char*)&s,sizeof(s));
 s.show();

 cout<<"\ndo you really want to modify";
 cin>>ans;
 if(ans=='y'||ans=='Y')
 f.seekg(-1*sizeof(s),ios::cur);
 s.get();
 f.write((char*)&s,sizeof(s));
 getch();
 }