/*
    Intersection Of Two Arrays
    
    Check which integer presents in both array and then print them.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, M, arr1[20], arr2[20], i, j, k, l;
    
    cout<<"Enter array size : ";
    cin>>N;
    
    M=N;
    
    cout<<"\nEnter first array elements :\n";
    for(i=0; i<N; ++i)
        cin>>arr1[i];
    
    cout<<"\nEnter second array elements :\n";
    for(i=0; i<N; ++i)
        cin>>arr2[i];
    
    for(i=0; i<N; ++i)
    {
        int a=arr1[i];
        
        int x=1;
        
        for(j=0; j<M; ++j)      //searching both the arrays contains same element or not
            if(arr2[j]==a)      //if found,
            {
                int y=1;
                
                for(int k=i+1; k<N; ++k)    //counting in first array number of times same element appeared
                    if(arr1[k]==a)
                        ++x;
                    
                for(int k=j+1; k<M; ++k)    //counting in second array number of times same element appeared
                    if(arr2[k]==a)
                        ++y;
                    
                int min=x<y?x:y;    //which integer presents in both the arrays 
                
                for(int k=0; k<min; ++k)
                    cout<<a<<"  ";
                
                for(int k=i+1; k<N; ++k)
                    if(arr1[k]==a)      //deleting same elements in first array
                    {
                        for(int l=k; l<N; ++l)
                            arr1[l]=arr1[l+1];
                        
                        --N;
                        --l;
                    }
                break;
            }
    }
    
    return 0;
}