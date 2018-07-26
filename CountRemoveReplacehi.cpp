/*
    Count Remove And Replace 'hi'
    
    Take as input a string.
    
    Write a recursive function which
        (a) Counts the number of times 'hi' appears in the string. Print the value returned.
        (b) Removes all 'hi' in the string. Print the value returned.
        (c) Replaces all 'hi' in the string with 'bye'. Print the value returned.
        
        part(b) and part(c) cannot be done simaltaneously.
        If part(b) is followed first, then there wil be no 'hi' in the string,
        hence there will be nothing to replace 'bye' with.
        and similarly if part(c) is followed first, then there will be no 'hi' in the string,
        and therefore cannot be removed. 
*/

#include<iostream>

using namespace std;

int main()
{
    char str[30];
    int len, x, countHI(char [], int), ch; 
    void remov(char [], int), replc(char [], int);
    
    cout<<"Enter string :\n";
    gets(str);
    
    
    for(len=0; str[len]!='\0'; ++len);
    
    x=countHI(str,len);    //part (a) 
    
    cout<<endl<<"Number of 'hi' in the string are : "<<x;
    
    cout<<endl<<"\n\nPart(b) : Removes all 'hi' in the string.\n";
    cout<<"Part(c) : Replaces all 'hi' in the string with 'bye'.\n";
    cout<<endl<<"Enter your choice ( 1 or 2 ): ";
    cin>>ch;
    
    if(ch==1)       //Part(b)
    {
        remov(str,len);
    
        cout<<endl<<"\nAfter removing 'hi's from the string :\n";
        puts(str);
    }
    
    
    else if(ch==2)      //part (c)
    {
        replc(str,len);
    
        cout<<endl<<"\nAfter replacing 'hi' with 'bye', the string becomes :\n";
        puts(str);
    }
    else
        cout<<endl<<"Wrong choice !!!"<<endl;
    return 0;
}

int i=0, count=0;

int countHI(char str[], int len)
{
    if(i<len-1)
    {
        if(str[i]=='h'&&str[i+1]=='i')
            ++count;
        
        ++i;
        countHI(str,len);
    }
    
    return count;
}

int l=0;

void remov(char str[], int len)
{
    if(l<len-1)
    {
        if(str[l]=='h'&&str[l+1]=='i')
        {
            int k=1;
            
            while(k<=2)
            {
                for(int j=l; j<len; ++j)
                    str[j]=str[j+1];
                
                ++k;
                --len;
            }
            remov(str,len);
        }
        
        ++l;
        remov(str,len);
    }   
}

int m=0;

void replc(char str[], int len)
{
    if(m<len-1)
    {
        if(str[m]=='h'&&str[m+1]=='i')
        {
            int k=1, n=m;
            
            while(k<2)
            {
                len+=1;
                
                for(int j=len-1; j>m; --j)
                    str[j]=str[j-1];
                                
                ++k;
            }
            
            str[n]='b';
            str[n+1]='y';
            str[n+2]='e';
            
        }
        
        ++m;
        replc(str,len);
    }
    
}