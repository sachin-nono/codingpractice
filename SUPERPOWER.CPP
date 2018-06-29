/*SUPER POWER
Input two numbers.
Calculate a^b
*/
#include"iostream.h"
#include"conio.h"

void main()
{
clrscr();
long x,y,power(int,int),z;
cout<<"Enter two numbers:\n";
cin>>x>>y;
z=power(x,y);
cout<<x<<" raised to power "<<y<<" is :"<<z;
getch();
}

long power(int x,int y)
{
long a=1;
while(y)
	{
	a=a*x;
	y--;
	power(x,y);
	}
return a;
}
