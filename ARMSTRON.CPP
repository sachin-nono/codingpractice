/*
Armstrong Number - An Armstrong Number of three digits is an integer such
that the sum of the cubes its digits is equal to the number itself.
Print TRUE if it is otherwise FALSE
*/
#include"iostream.h"
#include"conio.h"
void main()
{
clrscr();
long num;
void isarms(long);
cout<<"Enter a number:";
cin>>num;
isarms(num);
getch();
}
void isarms(long num)
{
long a=num,sum=0,x;
while(a)
	{
	 x=a%10;
	 sum=sum+(x*x*x);
	 a/=10;
	}
if(sum==num)
	cout<<"TRUE";
	else
		cout<<"FALSE";
}