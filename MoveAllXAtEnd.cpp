/*
    Move All X At End
    
    Take as input a string.
    Write a recursive function which moves all 'x' from the string to its end.
*/

#include<iostream>

using namespace std;

int main()
{
    void moveX(char [], int);
    char str[30];
    int len;
    
    cout<<"Enter a string : ";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);      //claculating string length
    
    moveX(str,len);
    
    cout<<endl<<"After moving all x at end, string now is :\n";
    puts(str);
    
    return 0;
}

int i=0, j;
char x;

void moveX(char str[], int len)
{
    if(str[i]!='\0')
    {
        if(str[i]=='x'||str[i]=='X')
        {
            x=str[i];
            for(j=i; j<len-1; ++j)
                str[j]=str[j+1];
            
            str[j]=x;       //shifting x to last position
            
            --len;
            ++i;
            
            moveX(str,len);
        }
        else
        {
            ++i;
            
            moveX(str,len);
        }
    }
}