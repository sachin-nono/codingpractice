/*
    Remove Duplicate Letters. 
    
    for ex. , if input is - hello
                 output should be - helo
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

void duplicate(char str[], int len)
{
int i=0;
	
while(str[i]!='\0')
	{
	if(str[i]==str[i+1])
    {
        for(int j=i; j<len;j++)
            str[j]=str[j+1];
        len-=1;
    }
	
	i+=1;
	}
}