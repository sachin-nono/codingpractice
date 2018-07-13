/*
    String - Toggle case
*/

#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
    char str[30];
    
    cout<<"Enter a string :\n";
    gets(str);
    
    cout<<"\nAfter case of each characters in the string is toggled :\n";
    
    for(int i=0;str[i]!='\0';i++)
        if(islower(str[i]))
            str[i]=toupper(str[i]);
        else if(isupper(str[i]))
            str[i]=tolower(str[i]);
    
    puts(str);
    
    return 0;
}