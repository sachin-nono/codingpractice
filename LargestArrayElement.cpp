/*
WAP to find largest element in an array
*/

#include<iostream>
#include<dos>
#include<cstdlib>

using namespace std;

int main()
{
int n,arr[1000],max=0;

cout<<"Enter size of array n<1000 :";
cin>>n;

if(n<=0||n>1000)
	{
	cout<<"\nEnter in the given range!!!";
	sleep(1);
	exit(0);
	}

cout<<"Enter elements of array:\n";
for(int i=0;i<n;i++)
	cin>>arr[i];

max=arr[0];       //asssuming first element of array to be largest

for(i=0;i<n;i++)
	{
	if(arr[i]>max)
		max=arr[i];
	}

cout<<"Maximum value in array is:"<<max;

return 0;
}
