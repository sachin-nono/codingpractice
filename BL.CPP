#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
int size,no,arr[1000],k,counter=0;
cout<<"Enter the size of array <1000 :";
cin>>size;
if(size<=0||size>1000)
	{
	cout<<"\nEnter in the given range!!!";
	sleep(1);
	exit(1);
	}
cout<<"\nEnter elements of array:\n";
for(int i=0;i<size;i++)
	cin>>arr[i];
cout<<"\nEnter a no to search:";
cin>>no;
for(i=0;i<size;i++)
	{
	if(arr[i]==no)
		{
		counter=1;
		k=i+1;
		break;
		}
	}
if(counter==1)
	cout<<"\nElement found at "<<k<<"th position.";
	else
		cout<<"-1  which means failure";
getch();
}