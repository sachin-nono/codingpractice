#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 long n,rev=0;
 cout<<"Enter a no.:";
 cin>>n;
 cout<<endl;
 while(n!=0)
	{
	 rev*=10;
	 rev=rev+n%10;
	 n/=10;
	}
 cout<<"Reversed no.:"<<rev;
 getch();
}