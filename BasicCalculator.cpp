/*
	WAP a program to create a basic calculator
*/

#include<iostream>
#include<cstdlib>
#include<stdlib> // Update this file
                 // one should never use goto
using namespace std;

int main()
{
char ch,ex;
float x,y;
int a,b;

nb: cout<<"Following are the operators : "<<endl;     //nb is goto label.
	cout<<"1. +\n"
	<<"2. -\n"
	<<"3. *\n"
	<<"4. /\n"
	<<"5. %\n"
	<<"Enter your choice:";
cin>>ch;

switch(ch)
	{
	case '1':{
		  cout<<endl<<"Enter two operands :";
          cout<<endl;
		  cin>>x>>y;
		  cout<<x<<" + "<<y<<" = "<<x+y;
		  cout<<endl;
            }
		  break;
	case '2':{
		 cout<<endl<<"Enter two operands :";
         cout<<endl;
		 cin>>x>>y;
		 cout<<x<<" - "<<y<<" = "<<x-y;
		 cout<<endl;
         }
		 break;
	case '3':{
		 cout<<endl<<"Enter two operands :";
         cout<<endl;
		 cin>>x>>y;
		 cout<<x<<" * "<<y<<" = "<<x*y;
         cout<<endl;
		 }
		 break;
	case '4':{
		 cout<<endl<<"Enter two operands and second operand must not be '0' :";
         cout<<endl;
		 cin>>x>>y;
		 
		 lb: if(y==0)    //lb is a goto label. Second no should not be zero
			{
			cout<<endl<<"second number should not be zero!!!\nEnter again : ";
			cin>>y;
			goto lb;
			}

		 cout<<x<<" / "<<y<<" = "<<x/y;
         cout<<endl;
		 }
		 break;
	case '5':{
		 cout<<endl<<"Enter two operands and second operand must not be '0' :";
         cout<<endl;
		 cin>>a>>b;
		 mb: if(b==0)   //mb is a goto label. Second no should not be zero 
			{ 
			cout<<endl<<"second number should not be zero!!!\nEnter again : ";
			cin>>b;
			goto mb;
			}
		
		 cout<<a<<" % "<<b<<" = "<<a%b;
         cout<<endl;
		 }
		 break;
	
	default:cout<<endl<<"Enter above operators only!!!\n\n";
		cout<<endl<<"If you want to Exit, type Y or y:";     
		cin>>ex;
		
		if(ex=='Y'||ex=='y')         //if entered choice is 'y' or 'Y', control will be passed to label nb    
			exit(9);
		goto nb;
	}

return 0;
}
