/*SUPER POWER
Input two numbers.
Calculate a^b
*/

#include<iostream>

using namespace std;

int main()
{
long x,y,power(int,int),z;

cout<<"Enter two numbers:\n";
cin>>x>>y;

z=power(x,y);

cout<<x<<" raised to power "<<y<<" is :"<<z;

return 0;
}

long power(int x,int y)
{
long a=1;
while(y)
	{
	a=a*x;
	y--;
	power(x,y);
	}
return a;
}
