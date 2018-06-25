/*WAP to print a pattern by recursion*/
//Enter what is asked and wait and dont press enter!!!
#include"iostream.h"
#include"conio.h"
#include"stdlib.h"
#include"dos.h"
int y=1;
void main()
{
clrscr();
void recursion(int);
int x;
cout<<"Enter no of rows:";
cin>>x;
recursion(x);
getch();
}
void recursion(int x)
{

 if(y!=x)
	{
	for(int i=y;i>0;i--)
		cout<<"*"<<"\t";
	cout<<endl;
	y++;
	recursion(x);
	}
	else
		{
		sleep(1);
		cout<<"\nGood Bye!!!";
		sleep(1);
		exit(1);
		}
}
