/*
    Recursion - Obedient String
    
    Take as input str, a string. Write a recursive function that checks if the string was generated using the folowing 
    rules and returns a boolean value :
    
    (a) the string begins with an 'a'.
    (b) each 'a' is followed by nothing or an 'a' or 'bb'.
    (c) each 'bb' is followed by nothing or an 'a'.
    
    Print the value returned.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[10];
    int i=0;
    bool x, obedientString(char [], int);
    
    cout<<"Enter a string : ";
    gets(str);
    
    x = obedientString(str,i);
    
    cout<<endl<<"Result : "<<x<<endl;
    
    return 0;
}

bool obedientString(char str[], int i)
{
    if(str[i]=='a')     //if string begins with 'a'
    {
        ++i;
        
        if(str[i]=='\0')        //if next character is null, then return 'true'
            return true;
        
        else if(str[i]=='b')        //else if next character is 'b' then
        {
            ++i;
            
            if(str[i]=='b')     //check if next character is also 'b'
            {
                ++i;
                
                if(str[i]=='\0')        //check if 'bb' is followed by '\0'. If yes then return 'true'
                    return true;
                
                else if (str[i]=='a')       //if 'bb' is followed by 'a', then call the function again
                    obedientString(str,i);
                
                else 
                    return false;  
            }
            else            //if next character is not 'b', then return 'false'
                return false;
        }
        else if(str[i]=='a')        //if next character is 'a', then call the function again
            obedientString(str,i);
        else 
            return false;       // if next character after 'a' is neither '\0' nor 'bb' nor 'a', then return 'false'
    }
    else 
        return false;       //if the first character is not 'a', then return 'false'
}