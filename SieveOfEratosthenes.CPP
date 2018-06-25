/*
WAP to print prime no within given range  (Sieve of Eratosthenes)...
*/
#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
int no,prime[1001];

cout<<"Enter a no between 1<=no<=1000 :";
cin>>no;
if(no<1||no>1000)
	{
	cout<<"Enter no in given range!!!";
	sleep(1);
	exit(0);
	}
for(int i=2;i<=no;i++)    //initally assuming all no's are prime
	prime[i]=1;

for(i=2;i*i<=no;i++)//mark nonprimes <=no using Sieve of Eratosthenes
	{
	if(prime[i]==1)
		{
		for(int j=i;j*i<=no;j++)
			prime[j*i]=0;
		}
	}

for(i=2;i<=no;i++)
	{
	if(prime[i])
		cout<<i<<"  ";
	}
getch();
}