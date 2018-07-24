/*
    Arrays - Sum Of Two Arrays
    
    Input elements of first array of size N. Again input elements of second array of size M.
    Write a function that returns the sum of two arrays. Print the value returned.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, arr1[20], M, arr2[20], arr3[20];
    void sum(int, int[], int, int[], int, int []);
    
    cout<<"Enter size of first array : ";
    cin>>N;
    
    cout<<endl<<"Enter elements of first array :\n";
    for(int i=0; i<N; ++i)
        cin>>arr1[i];
    
    cout<<endl<<"Enter size of second array : ";
    cin>>M;
    
    cout<<endl<<"Enter elements of second array :\n";
    for(int i=0; i<M; ++i)
        cin>>arr2[i];
    
    int max=N>M?N:M;
    
    sum(N,arr1,M,arr2,max,arr3);
    
    cout<<endl<<"Sum of two arrays is :\n";
    for(int i=0; i<max; ++i)
        cout<<arr3[i]<<"  ";
    
    cout<<endl;
    
    return 0;
}

void sum(int N, int arr1[], int M, int arr2[], int max, int arr3[])
{
    int x=0, y=0, z;
    
    for(int i=0; i<N; ++i)      //converting first array elements into a single integer 
    {
        x*=10;
        x+=arr1[i];
    }

    for(int i=0; i<M; ++i)      //converting second array elements into a single integer
    {
        y*=10;
        y+=arr2[i];
    }
    
    z=x+y;      //Sum of the two integers or two array elements
    
    for(int i=max-1; i>=0; --i)     //converting that array sum ( z, calculated above ) into array elements
    {
        arr3[i]=z%10;
        z/=10;
    }
}