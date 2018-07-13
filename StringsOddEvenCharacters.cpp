/*
    Strings -Odd Even Characters
    
    Input a string.
    Replace every odd character with a character having just higher ascii code and 
    every even character with a character having just lower ascii code.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[50];
    
    cout<<"Enter string :\n";
    gets(str);
    
    cout<<endl;
    
    for(int i=0;str[i]!='\0';i++)
    {
        int x=str[i];
        
        if(x%2!=0)
            str[i]=str[i]+1;
        else
            str[i]=str[i]-1;
            
    }
    
    puts(str);
    
    return 0;
}