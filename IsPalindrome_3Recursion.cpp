/*
    Is Palindrome_3
    
    Take as input a number N and store that in an array.
    Write a recursive function that tests if the array is palindrome or not 
    and returns a boolean value and print that value also.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, A[20];
    bool x, IsPalindrome(int [], int, int);
    
    cout<<"Enter array size : ";
    cin>>N;
    
    if(N>0)
    {
        cout<<"\nEnter the number :\n";
        for(int i=0; i<N; ++i)
            cin>>A[i];
        
        int j=N-1;
        
        x=IsPalindrome(A,N,j);
        
        if(x==true)
            cout<<"\nResult ( '1' means True and '0' means False ) : "<<x<<endl;
        else 
            cout<<"\nResult ( '1' means True and '0' means False ) : "<<x<<endl;
    }
    else
        cout<<"\nArray size should be atleast greater than 1!!!\n";
    
    return 0;
}

int i=0;

bool IsPalindrome(int A[], int N, int j)
{
    if(i<N/2)
    {
        if(A[i]!=A[j])
            return false;
        else
        {
            ++i;
            --j;
            
            IsPalindrome(A,N,j);
        }
    }
    
    return true;
}