#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
int binarysearch(int [],int,int);
void condition(int);
int size,arr[100],ele,pos;
cout<<"Enter size of array<100 :";
cin>>size;
condition(size);
for(int i=0;i<size;i++)
	cin>>arr[i];
cout<<"\nEnter element to be searched:";
cin>>ele;
pos=binarysearch(arr,size,ele);
if(pos!=-1)
	cout<<"\nElement is found at position:"<<pos;
	else
		cout<<"\nNot found!!!";
getch();
}

void condition(int z)
{
if(z<=0||z>100)
	{
	cout<<"\nEnter in the given range!!!";
	sleep(1);
	exit(0);
	}
	else
		cout<<"\nEnter array elements in ascending order only:\n";
}
int binarysearch(int arr[],int size,int ele)
{
int x,beg=0,last=size-1,mid;
while(beg<=last)
	{
	mid=int((beg+last)/2);
	if(ele==arr[mid])
		return mid;
		else if(ele<mid)
			last=mid-1;
			else
				beg=mid+1;
	}
return -1;
}