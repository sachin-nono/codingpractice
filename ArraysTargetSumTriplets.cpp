/*
    Arrays - Target Sum Triplets
    
    Enter elements of an array.
    Input a number target.
    Print all triplets of numbers which sum to target.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,arr[100],target;
    
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"\nEnter elements of array :\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"\nEnter target number : ";
    cin>>target;
    
    cout<<"\nTriplets of numbers whose sum is "<<target<<" are :";
    
    for(int i=0;i<n;i++)
        for(int j=i+1;(j<=n&&j<n);j++)
            for(int k=j+1;k<n;k++)
            {
                if((arr[i]+arr[j]+arr[k])==target)
                cout<<endl<<arr[i]<<" , "<<arr[j]<<" and "<<arr[k]<<endl;
            }

    return 0;
}