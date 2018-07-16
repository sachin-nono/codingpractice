/*
    All Indices Problem
    
    Input elements of an array of size N.
    Enter a number M to be searched.
    Write a recursive function to print all index no. at which M is found in a 
    space seperated manner.
*/

#include<iostream>

using namespace std;

int main()
{
    int N, M, A[20], x;
    bool available(int [], int, int);   //to check if element exists in the array or not.
    void indices(int [], int, int);     //print all indice(s) at which element is found.
    
    cout<<"Enter size of the array : ";
    cin>>N;
    
    if(N<1)     //size of the array should be atleast greater than or equal to 1.
    {
        cout<<"\nSize should not be less than 1.\nAborting!!!\n";
        return 0;
    }
    else
    {
        cout<<"\nEnter array elements :\n";
        for(int i=0; i<N; ++i)
            cin>>A[i];
        
        cout<<"\nEnter element to be searched : ";
        cin>>M;
        
        x=available(A,N,M);
        
        if(x==1)        //if element exists in the array.
            indices(A,N,M);
        else
            cout<<endl<<M<<" does not exist in the entered array!!!\n";
    }
    return 0;
}

int available(int A[], int N, int M)
{
    for(int i=0; i<N; ++i)
        if(A[i]==M)
            return true;    //if element exists then return true or 1.
    
    return false;       //if it doesnt exist then return false or -1.
}

int i=0;

void indices(int A[], int N, int M)
{
    if(i<N)
    {
        if(A[i]==M)
        {
            cout<<i<<"  ";
            
            ++i;
            indices(A,N,M);
        }
        else
        {
            ++i;
            indices(A,N,M);
        }
    }
}