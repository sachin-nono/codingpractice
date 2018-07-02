#include<iostream>
using namespace std;
int main()
{
int rows;
long fn=0,sn=1,tn;
cout<<"Enter no of rows:";
cin>>rows;
cout<<endl;
for(int i=1;i<=rows;i++)
	{
	for(int j=1;j<=i;j++)
		{
		 cout<<fn<<"\t";
		 tn=fn+sn;
		 fn=sn;
		 sn=tn;
		}
	cout<<endl;

	}
return 0;
}