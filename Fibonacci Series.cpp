/*
WAP to print Fibonacci series
*/
#include<iostream>
#include<dos>
#include<cstdlib>

using namespace std;

int main()
{
int fn=0,sn=1,tn,no;

cout<<"Enter a no 0<=no<=1000 :";
cin>>no;
cout<<endl;

if(no<1||no>1000)
	{
	cout<<"Enter no in given range!!!";
	sleep(1);
	exit(0);
	}

cout<<endl<<" Fibonacci Series upto "<<no<<" is :";

for(int i=1;i<=no;i++)
	{
	cout<<fn<<" ";
	tn=fn+sn;
	fn=sn;
	sn=tn;
	}

return 0;
}
