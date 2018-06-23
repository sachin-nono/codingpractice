#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 long n;
 int x=0;
 cout<<"enter a no>2:";
 cin>>n;
 for(int i=2;i<=(n/2);i++)
    {
     if(n%i==0)
       {
	x=1;
	break;
       }
    }
 if(x==0)
   cout<<"prime no.";
 else
     cout<<"not a prime no.";
 getch();
}