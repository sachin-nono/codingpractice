/*
    Take as input a string.
    Write a function which tests if the string is palindrome or not and returns a Boolean value, 
    and print the value returned.
*/
#include<iostream>

using namespace std;

int main()
{
    char str[20];
    int len;
    bool IsPalindrome(char [], int), result;
    
    cout<<"Enter a string : ";
    gets(str);
    
    for(len=0; str[len]!='\0'; len++);
    
    result=IsPalindrome(str,len);
    
    cout<<"\nReult ( '1' means success and '0' means faliure ) : "<<result<<endl;
    
    return 0;
}

bool IsPalindrome(char str[], int len)
{
    for(int i=0, j=len-1; i<len/2; i++, j--)
        if(str[i]!=str[j])
            return false;
        
    return true;
}