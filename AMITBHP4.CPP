#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 int n,flag=0;
 cout<<"Enter a no between 1<=n<=1000:";
 cin>>n;
 for(int i=3;i<=n;i++)
	{
	 for(int j=2;j<=i/2;j++)
		if(i%j==0)
			{
			 flag=1;
			 break;
			 }
	if(flag==0)
		cout<<"2"<<"\t"<<i<<"\t";
	}
 getch();
}
