/*
WAP a program to create a basic calculator
*/

#include<iostream>
#include<stdlib>

using namespace std;

int main()
{
char ch,ex;
float x,y;
int a,b;

nb: cout<<"Following operators are provided:\n"     //nb is goto label.
	<<"1. +\n"
	<<"2. -\n"
	<<"3. *\n"
	<<"4. /\n"
	<<"5. %\n"
	<<"Enter your choice:";
cin>>ch;

switch(ch)
	{
	case '1':{
		  cout<<"Enter two operands:\n";
		  cin>>x>>y;
		  cout<<x<<"+"<<y<<"="<<x+y;
		  }
		  break;
	case '2':{
		 cout<<"Enter two operands:\n";
		 cin>>x>>y;
		 cout<<x<<"-"<<y<<"="<<x-y;
		 }
		 break;
	case '3':{
		 cout<<"Enter two operands:\n";
		 cin>>x>>y;
		 cout<<x<<"*"<<y<<"="<<x*y;
		 }
		 break;
	case '4':{
		 cout<<"Enter two operands and second operand must not be '0' :\n";
		 cin>>x>>y;
		 
		 lb: if(y==0)    //lb is a goto label. Second no should not be zero
			{
			cout<<"second number should not be zero!!!\nEnter again:";
			cin>>y;
			goto lb;
			}

		 cout<<x<<"/"<<y<<"="<<x/y;
		 }
		 break;
	case '5':{
		 cout<<"Enter two operands and second operand must not be '0' :\n";
		 cin>>a>>b;
		 mb: if(b==0)   //mb is a goto label. Second no should not be zero 
			{ 
			cout<<"second number should not be zero!!!\nEnter again:";
			cin>>b;
			goto mb;
			}
		
		 cout<<a<<"%"<<b<<"="<<a%b;
		 }
		 break;
	
	default:cout<<"Enter above operators only!!!\n\n";
		cout<<"If you want to Exit, type Y or y:";     
		cin>>ex;
		
		if(ex=='Y'||ex=='y')         //if entered choice is 'y' or 'Y', control will be passed to label nb    
			exit(9);
		goto nb;
	}

return 0;
}
