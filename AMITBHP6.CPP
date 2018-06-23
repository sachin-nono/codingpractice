#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 long n,k;
 int x,y,sume=0,sumo=0,z=0;
 cout<<"Enter no.:";
 cin>>n;
 k=n;
 while(k)
	{
	 if(k%10)
	   z++;
	 k/=10;
	}
 while(n)
	{
	 x=n%10;
	 sume=sume+x;
	 n=n/10;
	 y=n%10;
	 sumo=sumo+y;
	 n/=10;
	}
 if(z%2!=0)
    {
     cout<<"\nsum at even places:"<<sume;
     cout<<"\nsum at odd places:"<<sumo;
     }
    else
	{
	 cout<<"\nsum at even places:"<<sumo;
	 cout<<"\nsum at odd places:"<<sume;
	 }
 getch();
}