/*
    Strings - Difference In ASCII Codes
    
    Take as input a string.
    Write a Function that inserts between each pair of characters 
    the difference between their ASCII Codes. Print the value returned.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[20];
    int x, len, i;
    
    cout<<"Enter a string :\n";
    gets(str);
    
    cout<<endl;
    
    len=strlen(str);
    
    for(i=0; i<len-1; ++i)
    {
        x=str[i]-str[i+1];
        
        x=x<0?(-x):x;
        
        cout<<str[i]<<" "<<x<<" ";
        
    }
    cout<<str[i]<<endl;
    
    return 0;
}