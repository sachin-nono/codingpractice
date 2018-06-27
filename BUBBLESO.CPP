//Bubble Sort
#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
long arr[101],size;
void condition(long),bubblesort(long [],long);
cout<<"Enter size of array<100 :";
cin>>size;
condition(size);
cout<<"\nEnter elements of array:\n";
for(long i=0;i<size;i++)
	cin>>arr[i];
bubblesort(arr,size);
getch();
}
void condition(long size)
{
if(size<=0||size>101)
	{
	cout<<"Enter in given range only!!!";
	sleep(1);
	exit(1);
	}
}

void bubblesort(long arr[],long size)
{
long t,ptr;
for(long i=0;i<size;i++)
	{
	ptr=0;
	while(ptr<size-i)
		{
		if(arr[ptr]>arr[ptr+1])
			{
			t=arr[ptr];
			arr[ptr]=arr[ptr+1];
			arr[ptr+1]=t;
			}
		ptr+=1;
		}
	}
cout<<endl;
cout<<"Sorted array:";
cout<<endl;
for(i=0;i<size;i++)
	cout<<arr[i]<<"\n";
}