/*
    Arrays - Is Second Array Mirror Inverse Of First Array
    
    Input elements in two arrays of size N.
    Write a function that returns true if second array is mirror-inverse of first array and false otherwise.
    
    N cannot be negative. Range of numbers can be between 0 to N-1.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, arr1[30], arr2[30];
    bool x, lessThanN(int, int [], int []), mirrorInverse(int, int [], int []);
    
    cout<<"Enter array size : ";
    cin>>N;
    
    cout<<endl<<"Enter elements of first array :\n";
    for(int i=0; i<N; ++i)
        cin>>arr1[i];
    
    cout<<endl<<"Enter elements of second array :\n";
    for(int i=0; i<N; ++i)
        cin>>arr2[i];
    
    x=lessThanN(N,arr1,arr2);     //elements in array should be between 0 to N-1
    
    if(x!=0)
    {
        x=mirrorInverse(N,arr1,arr2);     
        
        if(x!=0)
            cout<<endl<<"TRUE"<<endl;
        else
            cout<<endl<<"FALSE"<<endl;
    }
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool lessThanN(int N, int arr1[], int arr2[])
{
    bool x, noRepeat(int, int [], int []);
    
    for(int i=0; i<N; ++i)
        if( (arr1[i]<0||arr1[i]>=N)&&(arr2[i]<0||arr2[i]>=N) )
            return false;
        else
            x=noRepeat(N,arr1,arr2);      //elements should be unique
    
    return x;
}

bool noRepeat(int N, int arr1[], int arr2[])
{
    int i, j;
    
    for(i=0; i<N; ++i)
        for(j=i+1; j<N; ++j)
            if( (arr1[j]==arr1[i])&&(arr2[j]==arr2[i]) )
                return false;
    
    return true;
}

bool mirrorInverse(int N, int arr1[], int arr2[])
{
    int x, i, j;
    
    for(i=0; i<N; ++i)
    {
        x=arr1[i];
        
        for(j=0; j<N; ++j)
            if(arr2[j]==i)
                if(j!=x)
                    return false;
    }
    
    return true;
}