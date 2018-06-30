/*
Pattern Mountain
for rows=4, pattern will be
1                                               1
1	2                               2       1
1       2	3               3       2       1
1       2       3	4	3	2       1
*/
#include"iostream.h"
#include"conio.h"
void main()
{
clrscr();
int rows,i,j,k,l,m,n,x;

cout<<"Enter number of rows:";
cin>>rows;
x=rows;

for(i=1;i<rows;i++)       //for rows=1 to rows-1
	{
	for(k=1;k<=i;k++)
		cout<<k<<"\t";
	for(j=1;j<=(2*(x-1)-1);j++)
		cout<<"\t";
	for(l=i;l>=1;l--)
		cout<<l<<"\t";
	x--;
	cout<<endl;
	}

for(i=rows;i<=rows;i+=5)     // for last row
	{
	for(m=1;m<=i;m++)
		cout<<m<<"\t";
	for(n=i-1;n>=1;n--)
		cout<<n<<"\t";
	}

getch();
}