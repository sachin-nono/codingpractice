/*
    Recursion nth Triangle
    
    Write a recursive function to find nth Triangle wherex
    1st triangle is 1,
    2nd tirangle is 1+2=3
    3rd triangle is 1+2+3=6 
    and so on.
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    int triangle(int n);
    
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<endl<<n<<"th triangle is : "<<triangle(n)<<endl;
    
    return 0;
}

int sum=0;

int triangle(int n)
{
    if(n>=1)
    {
        sum+=n;
        --n;
        triangle(n);
    }
    
    return sum;
        
}