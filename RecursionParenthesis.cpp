/*
    Recursion - What Is In The Parenthesis
    
    Take as input a string.
    The string contains a single pair of parenthesis "(...)".
    Write a recursive function which returns the contents between the parenthesis.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[40];
    void parenthesis(char []);
    
    cout<<"Enter a string :\n";
    gets(str);
    
    parenthesis(str);
    
    return 0;
}

int i=0;

void parenthesis(char str[])
{
    if(str[i]!='\0')
    {
        if(str[i]=='(')
        {
            for(int j=i+1; str[j]!=')'; ++j)
                cout<<str[j];
            
            cout<<"\t";
        }
    
        ++i;
        parenthesis(str);
    }
}