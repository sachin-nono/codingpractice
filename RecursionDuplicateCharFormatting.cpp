/*
    Recursion - Duplicate Character Formatting. 
    
    for ex. , if input is - hello
                 output should be - hel*lo
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    void duplicate(char [], int);
    char str[26];

    cout<<"Enter a string:";
    gets(str);
    
    int len=strlen(str);
    
    duplicate(str,len);

    cout<<"\nAfter removing duplicates:\n";
    puts(str);
    
    return 0;
}

int i=0;

void duplicate(char str[], int len)
{
    if(str[i]!='\0')
	{
        if(str[i]==str[i+1])
        {
            len+=1;
        
            for(int j=len; j>=(i+1); j--)
                str[j]=str[j-1];
        
            str[i+1]='*';
            
            i+=1;
            duplicate(str,len);
        }
        else
        {
            i+=1;
            duplicate(str,len);
        }
	}
	

}
