/*
To count no of times a digit appeared in entered number
*/
#include"iostream.h"
#include"conio.h"
void main()
{
clrscr();
long no,digit,rem,count=0;
cout<<"Enter a number:";
cin>>no;
cout<<"Enter a digit to be counted (between 0 to 9) : ";
cin>>digit;
while(no)
	{
	rem=no%10;
	if(digit==rem)
		count++;
	no=no/10;
	}
cout<<"Number of times "<<digit<<" appeared in entered number is/are: "<<count;
getch();
}