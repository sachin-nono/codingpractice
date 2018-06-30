#include"iostream.h"
#include"conio.h"
#include"stdlib.h"
void main()
{
clrscr();
int rows;
cout<<"Enter odd no of rows:";
cin>>rows;

if(rows%2==0)
	exit(9);

//int x=int(rows/2+1);

for(int i=1;i<=rows;i++)
	{
	if(i==1||i==rows)
		for(int j=1;j<=rows;j++)
			cout<<"*\t";
	else
		{

		}
	cout<<endl;
	}

getch();
}