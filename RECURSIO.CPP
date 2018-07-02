/*WAP to print a pattern by recursion*/
//Enter what is asked and wait and dont press enter!!!
#include<iostream>
//#include"stdlib.h"
//#include"dos.h"
using namespace std;
int main()
{
void recursion(int);
int x;
cout<<"Enter no of rows:";
cin>>x;
recursion(x);
return 0;
}
void recursion(int x)
{
 int y=x;
 if(y!=0)
	{
	for(int i=x;i>0;i--)
		cout<<"*"<<"\t ";
	cout<<endl;
	x--;
	y--;
	recursion(y);
	}
	else
		{
		//sleep(1);
		cout<<"\nGood Bye!!!";
		//sleep(1);
		exit(0);
		}
}