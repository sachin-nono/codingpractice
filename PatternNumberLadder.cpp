/*Pattern Number Ladder
for n=3, pattern will be,
1
2	3
4	5	6
*/

#include<iostream>

using namespace std;

int main()
{
int rows,n=1;
cout<<"Enter no of rows:";
cin>>rows;
cout<<endl;

for(int k=1;k<=rows;k++)
	{
	for(int i=1;i<=k;i++)
		{
		cout<<n<<"\t";
		n++;
		}
	cout<<endl;
	}

return 0;
}
