#include"iostream.h"
#include"conio.h"
#include"math.h"
void main()
{
 clrscr();
 long bn,bino,x=0,sum=0,y;

 cout<<"Enter a binary no.:";
 cin>>bino;
 bn=bino;
 if(bn!=0&&bino!=0)
	{
	 if(bn%10!=0)
	    x++;
	 bn/=10;
	 y=bino%10;
	 sum=sum+y*pow(2,x);
	 bino/=10;
	 }
 cout<<"\decimal equivalent no:"<<sum;
 getch();
}
 /*while(bno)
	{
	  x=bno%10;
	  sum=sum+x*pow(*/





