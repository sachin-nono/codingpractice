/*
PASCALS TRIANGLE
1
11
121
1331
*/
#include"iostream.h"
#include"conio.h"

void main()
{
clrscr();
int rows;
long fact(int);       //to calculate factorial

cout<<"Enter number of rows:";
cin>>rows;

for(int i=0;i<rows;i++)
	{
	for(int j=0;j<=i;j++)
		cout<<fact(i)/(fact(j)*fact(i-j))<<"\t";
	cout<<endl;
	}
getch();
}

long fact(int num)
{
long f=1;
int i=1;
while(i<=num)
	{
	f=f*i;
	i++;
	}
return f;
}