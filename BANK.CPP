#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class bank
{
 char name[20];
 long acc_no;
 float balance;

 public:

 void initial()
 {
  cout<<"\n name: ";
  gets(name);
  cout<<"\n account number : ";
  cin>>acc_no;
  cout<<"enter amount : ";
  cin>>balance;
 }
 void deposit(float amt)
 {
   balance+=amt;
   cout<<"amount deposited ";
 }
 void withdraw(float amt)
 {
  if((amt-balance)>=1000)
   {
    balance=amt-balance;
    cout<<"amount withdraw ";
   }
   else
   {
    cout<<"minimum balance should be 1000 ";
    cout<<"you can withdraw only "<<balance-1000;
   }
  }
  void display()
  {
   cout<<"account details ";
   cout<<"account number : "<<acc_no;
   cout<<"account holder : ";
   puts(name);
   cout<<"balance "<<balance ;
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

 do{
    cout<<"\n 1.DEPOSIT \n"
	<<"2.WITHDRAW \n"
	<<"3.EXIT \n"
	<<"ENTER CHOICE : ";
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
  cout<<"wrong choice ";
 }
  b.display();
}while(ch!=3);
  getch();
 }



