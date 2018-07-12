/*
    GCD ( Greatest Common Divisor )
*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, calgcd(int, int), gcd;
    
    cout<<"Enter two numbers :\n";
    cin>>num1>>num2;
    
    if(num1==0&&num2==0)
        cout<<"\nValues must be non-zero!!!\n";
    else
    {
        gcd=calgcd(num1,num2);
        
        cout<<"\nGCD of "<<num1<<" and "<<num2<<" is : "<<gcd<<endl;
    }
    return 0;
}

int calgcd(int num1, int num2)
{
    int x;
    
    for(int i=1;(i<=num1||i<=num2);i++)
    {
        if(num1%i==0&&num2%i==0)
            x=i;
    }
    
    return x;
}