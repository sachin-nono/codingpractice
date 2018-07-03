/*
WAP  for Linear Search of an element in an array...
*/
#include<iostream>
#include<dos>
#include<cstdlib>

using namespace std;

int main()
{
int size,no,arr[1000],k,counter=0;

cout<<"Enter the size of array <1000 :";
cin>>size;

if(size<=0||size>1000)                  //to check if entered size is in given range or not
	{
	cout<<"\nEnter in the given range!!!";
	sleep(1);
	}
	else
	{
	cout<<"\nEnter elements of array:\n";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	}
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

return 0;
}
