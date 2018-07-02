/* Mirror Star Pattern   for ex. for n=3, pattern will be 
     *
    * *
   * * *
    * *
     *
*/

#include<iostream>
#include<cstdlib>
#include<dos>

using namespace std;

int main()
{
int rows,k,l,j,o,m,i,p,z=2;

cout<<"Enter no of rows(only odd no.):";
cin>>rows;

if(rows%2==0)
	{
	cout<<"I said only odd number of rows!!!";
	sleep(1);
	exit(6);
	}

l=rows/2;
l+=1;
m=l;

for(k=1;k<=l;k++)   //for upper half
	{
	for(o=1;o<m;o++)
		cout<<"\t";
	for(i=1;i<=k;i++)
		cout<<"*"<<"\t\t";
	m--;
	cout<<endl;
	}

l-=1;
//j=l;
for(k=l;k>=1;k--)   //for lower half
	{
	for(p=1;p<z;p++)
		cout<<"\t";
	for(i=k;i>=1;i--)
		cout<<"*"<<"\t\t";
	z++;
	cout<<endl;
	}

return 0;
}
