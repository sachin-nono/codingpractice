/*
Basic Banking
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

class bank
{
	char name[20];
	long acc_no;
	float balance;

	public:

	void initial()
	{
	cout<<"\n Name: ";
	gets(name);
	cout<<"\n Account Number: ";
	cin>>acc_no;
	cout<<"\nEnter Amount: ";
	cin>>balance;
	cout<<endl;
	}
	void deposit(float amt)
	{
	balance+=amt;
	cout<<"\nAmount Deposited: ";
	}
	void withdraw(float amt)
	{
	if((amt-balance)>=1000)
		{
		balance=amt-balance;
		cout<<"\nAmount Withdrawl: ";
		}
		else
			{
			cout<<"\nMinimum balance should be 1000. ";
			cout<<"\nYou can withdraw only: "<<balance-1000;
			}
	}
	void display()
	{
	cout<<"\nAccount Details: ";
	cout<<"\nAccount number: "<<acc_no;
	cout<<"\nAccount Holder: ";
	puts(name);
	cout<<"\nBalance: "<<balance ;
	}
	long getaccno()
	{
	return acc_no;
	}
};
void main()
{
clrscr();
bank b;
int ch;

do
	{
	cout<<"\n1.DEPOSIT."
	<<"\n2.WITHDRAW."
	<<"\n3.EXIT."
	<<"\n\nENTER YOUR CHOICE : ";
	cin>>ch;

	switch(ch)
	{
	case 1:
		b.initial();
		b.deposit(100000);
		break;

	case 2:
		b.initial();
		b.withdraw(100000);
		break;

	default:
		cout<<"Wrong Choice!!! ";
		exit(0);
	}
b.display();
}while(ch!=3);
getch();
}



