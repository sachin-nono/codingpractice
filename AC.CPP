#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
long no,reverse=0,x;
cout<<"Enter a no 0<=no<=1000000000 :";
cin>>no;
x=no;
cout<<endl;
if(no<0||no>1000000000)
	{
	cout<<"Enter no in given range!!!";
	sleep(1);
	exit(0);
	}
while(no)
	{
	reverse*=10;
	reverse=reverse+no%10;
	no/=10;
	cout<<reverse<<"\n";
	}
if(x%10==0)
	cout<<"\nReverse of entered no is :0"<<reverse;
	else
		cout<<"\nReverse of entered no is :"<<reverse;
getch();
}

