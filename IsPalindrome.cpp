/*
    Take as input a string.
    Write a function that returns true if the string is palindrome
    and false otherwise.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    char str[20];
    int len=0, check, isPalin(char [],int);
    
    cout<<"Enter a string :"<<endl;
    gets(str);
    

    for(len=0;str[len]!='\0';len++);            //to determine length of the string
    
    check=isPalin(str,len);             //function call 
    
    if(check!=-1)
        cout<<"\nTRUE!!!\n";
    else 
        cout<<"\nFALSE\n";
    
    return 0;
}

int isPalin(char str[], int len)
{
    int x,i;
    
    for(i=0,x=len-1;(str[i]!='\0'),x>=0;i++,x--)
        if(str[i]!=str[x])          //returns -1 if they are not equal
            return -1;
        
    return 0;
}