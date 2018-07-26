/*
    Count AAA
    
    Take as input a string. Write a recursive function which
    (a) counts the number of times 'aaa' appears in the string. Print the value returned.
    (b) counts the number of times 'aaa' appears in the string but only such instances of 'aaa'
        should be considered which do not overlap. Print the value returned.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[30];
    int len, x, countOverlapping(char [],int), countNonOverlapping(char [], int);
    
    cout<<"Enter a string :\n";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);
    
    x=countOverlapping(str,len);    //Part (a)
    
    cout<<endl<<endl<<"Number of times 'aaa' appeared when overlapping allowed : "<<x;
    
    x=countNonOverlapping(str,len);     //Part (b)
    
    cout<<endl<<endl<<"Number of times 'aaa' appeared when overlapping not allowed : "<<x<<endl;
    
    return 0;
}

int i=0, x=0;

int countOverlapping(char str[], int len)
{
    if(i<len-2)
    {
        if(str[i]=='a'&&str[i+1]=='a'&&str[i+2]=='a')   //simply counts number of times "aaa" appears
            ++x;
        
        ++i;
        countOverlapping(str,len);
    }
    
    return x;
}

int j=0, y=0;

int countNonOverlapping(char str[], int len)
{
    if(j<len-2)
    {
        if(str[j]=='a'&&str[j+1]=='a'&&str[j+2]=='a')
        {
            int z=0;
            
            for(int l=1,k=j+3; l<4; ++k,++l)        //if any of next three letters following "aaa" are 'a'
                 if(str[k]=='a')                    //then form overlapping sezuence, thus exit the loop
                     goto lb;        
            
            for(int k=j+3; k<(j+6); ++k)        //if any of next three letters following "aaa" are not 'a'
            {
                if(str[k]!='a')
                     ++z;
                 if(str[k]=='\0')
                     break;
            }
            
            if(z==1)            //if a letter following "aaa" is not 'a', and also if string terminates at that point, z wil increment by 1. 
                y=y+z;
            else if(z==2)       //if a letter following "aaa" is not 'a', and also if after one more letter, string terminates 
            {                   //z will be incremented by 2.
                z=z/2;
                y=y+z;
            }
            else if(z==3)       //if all the three letters following "aaa" are not 'a', z will be incremented by three
            {
                z=z/3;          //therefore z is divided by 3.
                y=y+z;
            }
            
        }
        lb:
        ++j;
        countNonOverlapping(str,len);
    }
    
    return y;
}