#include<fstream.h>
#include<conio.h>
#include<process.h>
void selements(int A[][3],int r, int c)
{

int s=0;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
s=s+A[i][j];
}
}
cout<<"sum of elements="<<s;
}
void individualrows(int A[][3], int r, int c)
{
for(int i=0; i<r;i++)
{
int s=0;
for(int j=0; j<c;j++)
{
s=s+ A[i][j];
}
cout<<"\nsum of"<<i+1<<"row="<<s;
}
}
void individualcolumn(int A[][3], int r, int c)
{
for(int i=0; i<r;i++)
{
int s=0;
for(int j=0; j<c;j++)
{
s=s+ A[j][i];
}
cout<<"\nsum of"<<i+1<<"column="<<s;
}
}
void leftdiagonal(int A[][3],int r, int c)
{
int s=0;
for(int i=0; i<r;i++)
{
for(int j=0; j<c;j++)
{
if(i==j)
s=s+ A[i][j];
}
}
cout<<"\nsum of left diagonal="<<s;
}
void rightdiagonal(int A[][3], int r, int c)
{
int s=0;
int order;
cout<<"enter the order of matrix";
cin>>order;
for(int i=0; i<r;i++)
{
for(int j=0; j<c;j++)
{
if(i+j==(order-1))
s=s+ A[i][j];
}
}
cout<<"\nsum of right diagonal="<<s;
}


void main()
{
clrscr();
int x[][3]={1,2,3,4,5,6,7,8,9};
int m,n;
cout<<"enter the number of rows";
cin>>m;
cout<<"enter the number of columns";
cin>>n;

cout<<"enter the elements of the matrix";
for(int p=0;p<m;p++)
{
for(int q=0;q<n;q++)
{
cin>>x[p][q];
}
}
int ch;
do
{
cout<<"\n1.sum of all elements"
    <<"\n2. sum of individual rows"
    <<"\n3. sum of individual columns"
    <<"\n4.sum of left diagonal"
    <<"\n5.sum of right diagonal"
    <<"\n6.Exit"
    <<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1: selements(x,m,n);
break;
case 2: individualrows(x,m,n);
break;
case 3: individualcolumn(x,m,n);
break;
case 4: leftdiagonal(x,m,n);
break;
case 5: rightdiagonal(x,m,n);
break;
default:
cout<<"invalid choice";
}
}while(ch!=6);
getch();
}
