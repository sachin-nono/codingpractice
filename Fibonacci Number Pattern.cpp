<<<<<<< HEAD:FIBPATTE.CPP
#include<iostream>
using namespace std;
=======
/*Fibonacci Number Pattern   for ex. for n=3, patter would be
0
1	1
2	3	5
*/

#include<iostream>

using namespace std;

>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Fibonacci Number Pattern.cpp
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
<<<<<<< HEAD:FIBPATTE.CPP
return 0;
}
=======

return 0;
}
>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Fibonacci Number Pattern.cpp
