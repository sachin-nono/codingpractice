/*
Pattern Rhombus
for N=3
		1
	2	3	2
3	4	5       4  	3
	2	3       2
		1
*/
#include"iostream.h"
#include"conio.h"

void main()
{
clrscr();
int rows,i,j,k,l,m,n,o,a,b,c,x=0,y=1,z=1;
cout<<"Enter number of rows:";
cin>>rows;

for(i=1;i<=rows;i++)
	{
	for(j=1;j<=rows-i;j++)       //for tabs
		cout<<"\t";

	for(k=y;k<=z;k++)            //i'th row element (left upper half)
		{
		cout<<k<<"\t";
		if(k==1)
			goto lb;
		}
	a=z;
	for(l=a-1;l>=i;l--)
		cout<<l<<"\t";       //i'th row element (right upper half)
	lb:
	x++;
	y++;
	z+=2;
	cout<<endl;
	}
a=x-1;
b=y-1;
c=z-4;
for(m=rows-1;m>=1;m--)
	{
	for(j=rows;j>m;j--)       //for tabs
		cout<<"\t";

	for(n=a;n<=c;n++)
		cout<<n<<"\t";    //for left lower half

	for(o=c-1;o>=a;o--)
		cout<<o<<"\t";    //for right lower half
	a--;
	b--;
	c-=2;
	cout<<endl;
	}
getch();
}