/*
Hollow Diamond Pattern
Only odd values of N
for N=5
* * * * *
* *   * *
*       *
* *   * *
* * * * *
*/

#include<iostream>

using namespace std;

int main()
{
int rows,a,c,x,i,j,k,l,m;

cout<<"Enter number of rows:";
cin>>rows;

x=rows/2+1;
a=x;
c=x;

for(i=1;i<=x;i++)                             //for upper half
	{
	if(i==1)                             //for first row only
		for(j=1;j<=rows;j++)
			cout<<"*\t";
		else
			{
			for(k=1;k<a;k++)         //*'s before tab
				cout<<"*\t";
			for(l=a;l<=c;l++)        //for creating tabs
				cout<<"\t";
			for(m=c+1;m<=rows;m++)   //*'s after tabs
				cout<<"*\t";
			a--;
			c++;
			}
	cout<<endl;
	}

a+=2;
c-=2;
for(i=x+1;i<=rows;i++)                              //for lower half
	{
	if(i!=rows)
		{
		for(k=1;k<a;k++)                    //*'s before tab
			cout<<"*\t";

		for(l=a;l<=c;l++)                   //for creating tabs
			cout<<"\t";

		for(m=c+1;m<=rows;m++)              //*'s after tabs
			cout<<"*\t";
		}
		else                                //for last row
			for(j=1;j<=rows;j++)
				cout<<"*\t";
	a++;
	c--;
	cout<<endl;
	}

return 0;
}
