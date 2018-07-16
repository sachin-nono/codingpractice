/*
    Last Index
    
    Enter elements of an array of size N. Take as input a number M.
    Write a recursive function which returns the last index at which M is found in the array
    and -1 if M is not found anywhere. Print the value returned.
    
*/

#include<iostream>

using namespace std;

int main()
{
    int N, A[20], M, x, lastIndex(int [], int, int);
    
    cout<<"Enter array size : ";
    cin>>N;
    
    if(N>0)
    {
        cout<<"\nEnter array elements :\n";
        for(int i=0; i<N; ++i)
            cin>>A[i];
        
        cout<<"\nEnter element to be searched : ";
        cin>>M;
        
        int j=N-1;
        
        x=lastIndex(A,j,M);
        
        if(x!=-1)
            cout<<"\nLast index at which "<<M<<" is found is : "<<x<<endl;
        else
            cout<<"\nElement not found!!!\n";
    }
    else
        cout<<"\nArray size should be atleast greater than or equal to 1 !!!\n";
    
    return 0;
}

int lastIndex(int A[], int j, int M)
{
    if(j>=0)
    {
        if(A[j]==M)
            return j;
        else
        {
            --j;
            lastIndex(A,j,M);
        }
    }
    
    return -1;
}