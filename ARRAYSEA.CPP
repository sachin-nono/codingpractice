/*
Enter a number N and add N more elements to an array,
then enter an element M
and write a recursive function which returns the first index at which M is found in the array.
*/
#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
int y=1;          //used in recursive function
void main()
{
clrscr();
int rec(int [],int,int);    //searching using recursive function
void arrele(int [],int);     //enter array elements
void check(int);
int size,arr[101],m,x;

cout<<"Enter size of array (<100) :";
cin>>size;
check(size);
arrele(arr,size);
cout<<"\nEnter element to be searched:";
cin>>m;
x=rec(arr,size,m);
if(x!=-1)
	cout<<"First appearence of element "<<m<<" has been noticed at position:"<<x+1;
	else
		cout<<"This element doesnt exist in above array.";
getch();
}
void check(int size)
{
if(size<=0||size>100)
	{
	cout<<"Ente in given range!!!";
	sleep(1);
	exit(2);
	}
}

void arrele(int arr[],int size)
{
cout<<"Enter array elements:\n";
for(int i=0;i<size;i++)
	cin>>arr[i];
}

int rec(int arr[],int size,int m)
{
if(y<=size)
	{
	if(m==arr[y])
		return y;
		else
			{
			y++;
			rec(arr,y,m);
			}
	}
return -1;
}