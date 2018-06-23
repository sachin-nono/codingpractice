#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void sum(int x[3][3])
{

 int s=0;
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  s=s+x[i][j];
 }
 cout<<"sum of all the elements : "<<s<<endl;
}
void row()
{
 int x[3][3];
 for(int i=0;i<3;i++)
 {
  int sumr=0;
  for(int j=0;j<3;j++)
  sumr+=x[i][j];
  cout<<"sum of row  "<<i+1<<": "<<sumr<<endl;
 }
}
void coloumn()
{
 int x[3][3];
 int csum[3];
 for(int i=0;i<3;i++)
 {
  csum[i]=0;
  for(int j=0;j<3;j++)
  csum[i]+=x[i][j];
 }
 for(i=0;i<3;i++)
 cout<<"sum of coloumn "<<i<<"is"<<csum[i]<<endl;
}
void left()
{
 int s=0;
 int x[3][3];
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  if(i==j)
  s=s+x[i][j];
 }
 cout<<"sum of left diagonal is "<<s<<endl;
}
void right()
{
 int s=0;
 int x[3][3];
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  if(i+j==2)
  s=s+x[i][j];
 }
 cout<<"sum of right diagonal is "<<s<<endl;
}
void main()
{
 clrscr();
 int ch;
 int a[3][3];
 cout<<"enter the elements of matrix \n";
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  cin>>a[i][j];
  }
 cout<<"entered elements in matrix form \n";
 for(i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  cout<<a[i][j]<<"\t";
  cout<<"\n";
 }

do{
   cout<<"1.SUM OF ALL THE ELEMENTS  \n"
       <<"2.SUM OF INDIVIDUAL ROW \n"
       <<"3.SUM OF INDIVIDUAL COLOUMN \n"
       <<"4.SUM OF LEFT DIAGONAL \n"
       <<"5.SUM OF RIGHT DIAGONAL \n"
       <<"6.EXIT \n"
       <<"enter your choice (1-6)";
   cin>>ch;

switch(ch)
{
 case 1:
   sum(a[3][3]);
   break;

 case 2:
   row();
   break;

 case 3:
   coloumn();
   break;

 case 4:
   left();
   break;

 case 5:
   right();
   break;

 }
 }while(ch!=6);
 getch();
 }