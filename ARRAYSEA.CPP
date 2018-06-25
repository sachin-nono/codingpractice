#include"iostream.h"
#include"conio.h"
int y=1;
void main()
{
int rec(int [],int,int);    //searching using recursive function
void arrele(int [],int);     //enter array elements

int size,arr[101],m,x;

cout<<"Enter size of array (<100) :";
cin>>size;
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