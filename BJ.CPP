#include"iostream.h"
#include"conio.h"
void main()
{
clrscr();
char ch;
float x,y;
int a,b;
nb: cout<<"Following operators are provided:\n"<<"1. +\n"<<"2. -\n"<<"3. *\n"<<"4. /\n"<<"5. %\n"<<"Enter your choice as 1 or 2 or 3 or 4 or 5 only:";
cin>>ch;
switch(ch)
	{
	case '1'://if(ch==1||ch=='+')
			{
			cout<<"Enter two operands:";
			cin>>x>>y;
			cout<<x<<"+"<<y<<"="<<x+y;
			}
		break;
	case '2':{
		 cout<<"Enter two operands:";
		 cin>>x>>y;
		 cout<<x<<"-"<<y<<"="<<x-y;
		 }
		 break;
	case '3':{
		 cout<<"Enter two operands:";
		 cin>>x>>y;
		 cout<<x<<"*"<<y<<"="<<x*y;
		 }
		 break;
	case '4':{
		 cout<<"Enter two operands and second operand must not be '0' :";
		 cin>>x>>y;
		 lb: if(y==0)
			{
			cout<<"second number should not be zero!!!\nEnter again:";
			cin>>y;
			goto lb;
			}
		 cout<<x<<"/"<<y<<"="<<x/y;
		 }
		 break;
	case '5':{
		 cout<<"Enter two operands and second operand must not be '0' :";
		 cin>>a>>b;
		 mb: if(b==0)
			{
			cout<<"second number should not be zero!!!\nEnter again:";
			cin>>b;
			goto mb;
			}
		 cout<<a<<"%"<<b<<"="<<a%b;
		 }
		 break;
	default:cout<<"Enter above operators only!!!\n\n";
		goto nb;
	}
getch();
}