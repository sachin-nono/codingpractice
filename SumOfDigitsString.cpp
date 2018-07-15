/*
    Sum Of The Digits
    
    Take as input a number in the form of a string.
    Write a recursive function that returns the sum of the digits in the string.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[10];
    long sum, SumOfDigits(char []);
    bool correctFormat(char []), x;
    
    cout<<"Enter the number : ";
    cin>>str;   //as 'cin>>' will ignore white spaces and tabs
    
    x=correctFormat(str);
    
    if(x==1)
    {
        sum=SumOfDigits(str);
        cout<<"\nSum of digits of the number is : "<<sum<<endl;
    }
    else
        cout<<"\nEntered number contains some special characters also!!!\n";
    
    return 0;
}

bool correctFormat(char str[])
{
    for(int i=0; str[i]!='\0'; ++i)
        if(!(isdigit(str[i])))
            return false;
        
    return true;
}


int i=0;
long sum=0, x;

long SumOfDigits(char str[])
{
    
    
    if(str[i]!='\0')
    {
        x=str[i]-'0';
        sum+=x;
        
        ++i;
        SumOfDigits(str);
    }
    
    return sum;
}