/*
PASCALS TRIANGLE   for n=4,
1
11
121
1331
*/

#include<iostream>
#include<conio>

using namespace std;

int main()
{
int rows;
long fact(int);       //to calculate factorial

cout<<"Enter number of rows:";
cin>>rows;

for(int i=0;i<rows;i++)
	{
	for(int j=0;j<=i;j++)
		cout<<fact(i)/(fact(j)*fact(i-j))<<"\t";
	cout<<endl;
	}

return 0;
}

long fact(int num)
{
long f=1;
int i=1;

while(i<=num)
	{
	f=f*i;
	i++;
	}

return f;
}
