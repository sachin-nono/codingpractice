/*
	WAP to print Fibonacci series
*/

// There should be no spaces in filename and rename it to fibonacci.cpp(series is unncessary)
#include<iostream>
#include<dos>
#include<cstdlib>

using namespace std;

int main()
{
int fn=0,sn=1,tn,no;

cout<<"Enter a no 0<=no<=1000 :"<<endl;
cin>>no;
// cout<<endl; // This is unnecessary

if(no<1||no>1000)
	{
	cout<<endl<<"Enter no in given range!!!";
	sleep(1);
	// exit(0); // You should avoid having multiple exit points in your program
		 // There should be only one exit point in the program.
	}
else
	{
	cout<<endl<<" Fibonacci Series upto "<<no<<" is :"<<endl;

	for(int i=1;i<=no;i++)
		{
		cout<<fn<<" ";
		tn=fn+sn;
		fn=sn;
		sn=tn;
		}	
	}

	return 0;
}