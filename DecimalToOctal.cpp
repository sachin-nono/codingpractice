/*
    Convert a Decimal Number (only integral part) to an Octal Number 
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    long decimal,octal=0,i=1;
    int rem;
    
    cout<<"Enter a Decimal Number : ";
    cin>>decimal;
    
    while(decimal)
    {
        rem=decimal%8;
        octal=octal+(rem*i);
        i*=10;
        decimal/=8;
    }
       
    cout<<endl<<"Octal Equivalent : "<<octal;
    cout<<endl;
    return 0;
}