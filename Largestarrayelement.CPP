/*WAP to find largest element in an array
*/
#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void main()
{
clrscr();
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
max=arr[0];
for(i=0;i<n;i++)
	{
	if(arr[i]>max)
		max=arr[i];
	}
cout<<"Maximum value in array is:"<<max;
getch();

}
