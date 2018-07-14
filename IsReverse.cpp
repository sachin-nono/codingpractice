/*
    Is Reverse?
    
    Take as input two strings.
    Write a function which tests if string-2 is reverse of string-1 or not and 
    returns a Boolean value.
    Print the vaue returned.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char first[20], second[20];
    bool  x, checkReverse(char [], char []);
    
    cout<<"Enter first string :\n";
    gets(first);
    
    cout<<"\n\nEnter second string :\n";
    gets(second);
    
    x=checkReverse(first,second);
    
    if(x==1)
        cout<<"\nResult : TRUE\n";
    else
        cout<<"\nResult : FALSE\n";
    
    return 0;
}

bool checkReverse(char first[], char second[])
{
    int len2=strlen(second);
    
    for(int i=0, j=len2-1; ((first[i]!='\0'),j>=0); i++, j--)
        if(first[i]!=second[j])
            return false;
    
    return true;
}