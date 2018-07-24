/*
    Arrays - Is Array Mirror Inverse
    
    Input elements of array of size N.
    Write a function that returns true if the array is mirror-inverse and false otherwise.
    
    N cannot be negative. Range of numbers can be between 0 to N-1.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, arr[30];
    bool x, lessThanN(int, int []), mirrorInverse(int, int []);
    
    cout<<"Enter array size : ";
    cin>>N;
    
    cout<<endl<<"Enter array elements :\n";
    for(int i=0; i<N; ++i)
        cin>>arr[i];
    
    x=lessThanN(N,arr);     //elements in array should be between 0 to N-1
    
    if(x!=0)
    {
        x=mirrorInverse(N,arr);     
        
        if(x!=0)
            cout<<endl<<"TRUE"<<endl;
        else
            cout<<endl<<"FALSE"<<endl;
    }
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool lessThanN(int N, int arr[])
{
    bool x, noRepeat(int, int []);
    
    for(int i=0; i<N; ++i)
        if(arr[i]<0||arr[i]>=N)
            return false;
        else
            x=noRepeat(N,arr);      //elements should be unique
    
    return x;
}

bool noRepeat(int N, int arr[])
{
    int i, j;
    
    for(i=0; i<N; ++i)
        for(j=i+1; j<N; ++j)
            if(arr[j]==arr[i])
                return false;
    
    return true;
}

bool mirrorInverse(int N, int arr[])
{
    int x, i, j;
    
    for(i=0; i<N; ++i)
    {
        x=arr[i];
        
        for(j=i+1; j<N; ++j)
            if(arr[j]==i)
                if(j!=x)
                    return false;
    }
    
    return true;
}