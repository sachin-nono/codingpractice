/*
    Recursion - Is Balenced
    
    Take as input a string.
    The string is a mathematical expression e.g. "[a+{b+(c+d)+e}+f]".
    Write a recursive function which tests if the brackets in expression are balanced or not and 
    returns a boolean value.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[40];
    bool isBalanced(char []), x;
    
    cout<<"Enter a string :\n";
    gets(str);
    
    x = isBalanced(str);
    
    cout<<endl<<x<<endl;     //boolean value get printed i.e. either 1 or 0
    
    return 0;
}

int i=0, a=0, b=0, c=0, d=0, e=0, f=0;

bool isBalanced(char str[])
{
    if(str[i]!='\0')
    {
        if(str[i]=='[')
            ++a;
        
        else if(str[i]==']')
            ++b;
        
        else if(str[i]=='{')
            ++c;
        
        else if(str[i]=='}')
            ++d;
        
        else if(str[i]=='(')
            ++e;
        
        else if(str[i]==')')
            ++f;
        
        
        
        ++i;
        isBalanced(str);
    }
    
    if(a!=b)
        return false;
    if(c!=d)
        return false;
    if(e!=f)
        return false;
    
    return true;
}