#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 int N,k,i,l,m,x,y,a,n,o,b;
 cout<<"Enter no of rows (only odd no):";
 cin>>N;
 cout<<endl;
 for(k=1;k<=N;k++)        // to print all *'s
	{
	for(i=1;i<=N;i++)
		cout<<"*\t";
	cout<<endl;
	}
 l=N/2;
 l+=1;
 m=l;
 n=l;
 o=l;
 for(k=2;k<=l;k++)       //upper left quarter
	{
	for(x=m;x<=l;x++)
		cout<<"0";
	m--;
	}
 cout<<endl;
 l++;
 m++;
 for(k=l;k<N;k++)        //for lower left quarter
	{
	for(y=m;y<=l;y++)
		cout<<"0";
	m++;
	}
  cout<<endl;
 l--;
 o++;
 n++;
 for(k=3;k<=l;k++)       //for upper right quarter
	{
	for(a=n;a<=o;a++)
		cout<<"0";
	o++;
	}
  cout<<endl;
 l++;
 o--;
 for(k=l;k<N-1;k++)      //for lower right quarter
	{
	for(b=n;b<=o;b++)
		cout<<"0";
	o--;
	}
  cout<<endl;
  cout<<"xxx";
 getch();
}