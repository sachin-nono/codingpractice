#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
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
 getch();
}