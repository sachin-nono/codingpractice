#include"iostream.h"
#include"conio.h"
void main()
{
clrscr();
int rows,i,j,k,o,l,m,n,x=0,y=1,z=1,a;
cout<<"Enter number of rows:";
cin>>rows;
for(i=1;i<=rows;i++)
	{
	for(j=1;j<=rows-i;j++)       //for tabs
		cout<<"\t";

	for(k=y;k<=z;k++)
		{
		cout<<k<<"\t";       //left half
		if(k==1)
			goto lb;
		}
	a=z;
	for(l=a-1;l>=i;l--)          //right half
		cout<<l<<"\t";
	lb:
	x++;
	y++;
	z+=2;
	cout<<endl;
	}

getch();
}