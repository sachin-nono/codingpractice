/*
    Is Array Sorted
    
    Enter elements of an array of size N.
    Write a function which returns true if the array is sorted and false otherwise.
    Print the value returned.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, A[20];
    bool x, isSortedAsc(int [], int), isSortedDes(int [], int);
    
    cout<<"Enter size of the array : ";
    cin>>N;
    
    if(N>0)
    {
        cout<<"\nEnter array elements :\n";
        for(int j=0; j<N; ++j)
            cin>>A[j];
        
        int ch;
        
        cout<<"\nWhich order you wants to check :\n"<<"1. Ascending Order. or\n2. Descending Order.\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        
        if(ch==1)
        {
            x=isSortedAsc(A,N);
            cout<<"\nResult : "<<x<<endl;
        }
        else if(ch==2)
        {
            x=isSortedDes(A,N);
            cout<<"\nResult : "<<x<<endl;
        }
        else
            cout<<"\nWrong Choice!!!\n";
    }
    else
        cout<<"\nEnter correct size!!!\n";
    
    return 0;
}


bool isSortedAsc(int A[], int N)    //To check ascending order
{
    for(int i=0; i<(N-1); ++i)
        if(!(A[i]<A[i+1]))
            return false;
        
    return true;
}

bool isSortedDes(int A[], int N)    //To check descending order
{
    for(int i=0; i<(N-1); ++i)
        if(!(A[i]>A[i+1]))
            return false;
        
    return true;
}