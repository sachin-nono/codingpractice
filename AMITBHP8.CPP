/*       pattern:
1
22
303
4004   */

#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 int rows,n=1;
 cout<<"enter no of rows:";
 cin>>rows;
 cout<<endl;
 for(int k=1;k<=rows;k++)
	{
	 for(int i=1;i<=k;i++)
		{
		if(i==1||i==k)
			cout<<n<<"\t";
		   else
			cout<<"0"<<"\t";
		}
	 n++;
	 cout<<endl;
	 }
 getch();
}