/*
    Reverese An Array
    
    Input elements of an array of size N.
    Write a recursive function to reverse its elements and print them also.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, A[20];
    void reverse(int [], int, int);
    
    cout<<"Enter array size : ";
    cin>>N;
    
    if(N>0)
    {
        cout<<"\nEnter array elements :\n";
        for(int i=0; i<N; ++i)
            cin>>A[i];
        
        int j=N-1;
        
        reverse(A,N,j);
        
        cout<<"\nReversed array is :\n";
        for (int i=0; i<N; ++i)
            cout<<A[i]<<"  ";
    }
    else
    {
        cout<<"\nSize should be atleast greater than or equal to 1\n";
        return 0;
    }
    
    return 0;
}

int i=0;

void reverse(int A[], int N, int j)
{
    if(i<N/2)
    {
        int t=A[i];
        A[i]=A[j];
        A[j]=t;
        
        ++i;
        --j;
        
        reverse(A,N,j);
    }
}