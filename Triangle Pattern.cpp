<<<<<<< HEAD:TRIANGLE.CPP
#include"iostream"
using namespace std;
int main()
{

=======
/*
Triangle Pattern
for ex. for n=3, the pattern will be
		1
	2	3	2
3	4	5	4	3
*/

#include<iostream>
using namespace std;

int main()
{
>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Triangle Pattern.cpp
int rows,i,j,k,o,l,m,n,x=0,y=1,z=1,a;

cout<<"Enter number of rows:";
cin>>rows;

for(i=1;i<=rows;i++)
	{
	for(j=1;j<=rows-i;j++)       //for tabs
		cout<<"\t";

	for(k=y;k<=z;k++)
		{
		cout<<k<<"\t";       //left half
		if(k==1)
			goto lb;
		}
	a=z;
	for(l=a-1;l>=i;l--)          //right half
		cout<<l<<"\t";
	lb:
	x++;
	y++;
	z+=2;
	cout<<endl;
	}

return 0;
<<<<<<< HEAD:TRIANGLE.CPP
}
=======
}
>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Triangle Pattern.cpp
