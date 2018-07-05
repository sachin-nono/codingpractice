/*
WAP for Binary search of an element in an array
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
int binarysearch(int [], int, int);
void isValid(int);

int size, arr[100], ele, pos;

cout<<"Enter size of array<100 : ";
cin>>size;

isValid(size);         //to check if entered sizs is in given range or not

for(int i=0;i<size;i++)  //enter array elements
	cin>>arr[i];

cout<<endl<<"Enter element to be searched : ";
cin>>ele;

pos=binarysearch(arr,size,ele);   //function call

if(pos!=-1)
	cout<<endl<<"Element is found at position : "<<pos+1<<endl;
	else
		cout<<endl<<"Not found!!!"<<endl;

return 0;
}

void isValid(int z)
{
if(z<=0||z>100)
	{
	cout<<endl<<"Enter in the given range!!!";
	}
	else
		cout<<endl<<"Enter array elements in ascending order only:\n";
}


int binarysearch(int arr[], int size, int ele)
{
int beg=0, last=size-1, mid;

while(beg<=last)
	{
	mid=((beg+last)/2);

	if(ele==arr[mid])
		return mid;
	else if(ele<mid)
		last=mid-1;
	else
		beg=mid+1;
	}
return -1;
}
