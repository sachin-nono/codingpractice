/*
    Take two numbers N1 amd N2.
    Write a function which prints first N1 terms of the series 3n+2
    which are not multiples of N2.
*/

#include<iostream>

using namespace std;

int main()
{
    int f,s;
    void series(int,int);
    
    cout<<"Enter first number : ";
    cin>>f;
    cout<<endl<<"Enter second number : ";
    cin>>s;
    
    series(f,s);
    
    return 0;
}

void series(int f,int s)
{
    int i,n=1,x;
    
    cout<<endl<<"Series : "<<endl;
    
    for(i=1;i<=f;i++)
    {
        x=3*n+2;
        
        if(s%x==0||x%s==0)
            f++;
        else
            cout<<x<<" ";
        
        n++;
    }
    
    cout<<endl;
}