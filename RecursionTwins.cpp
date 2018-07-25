/*
    Recursion - Twins
    
    Take as input a string.
    A 'Twin' is defined as two instances of a char seperated by a char.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[30];
    int x, len, countTwins(char [], int);
    
    cout<<"Enter a string :\n";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);
    
    x = countTwins(str,len);
    
    cout<<endl<<"Number of twins are : "<<x<<endl;
    
    return 0;
}

int i=0, x=0;

int countTwins(char str[], int len)
{
    if(i<len-2)
    {
        if(str[i]==str[i+2])
            ++x;
        
        ++i;
        countTwins(str,len);
    }
    
    return x;
}