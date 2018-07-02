/*
Sum of odd placed and even placed digits.
*/

#include<iostream>

using namespace std;

int main()
{
long sumodd=0,sumeven=0,num,z,a,b=0,x,y;

cout<<"Enter a number:";
cin>>num;

z=num;

while(z)
	{
	 b++;
	 z=z/10;
	}

cout<<"Number of digits in the entered number:"<<b<<endl;

while(num)
	{
	x=num%10;
	sumodd=sumodd+x;
	num/=10;
	y=num%10;
	sumeven=sumeven+y;
	num/=10;
	}

if(b%2!=0)
	{
	cout<<"\nSum at odd places:"<<sumodd;
	cout<<"\nSum at even places:"<<sumeven;
	}
	else
		{
		cout<<"\nSum at odd places:"<<sumeven;
		cout<<"\nSum at even places:"<<sumodd;
		}
return 0;
}
