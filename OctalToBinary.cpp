/*
    Convert an Octal Number to a Binary Number
*/
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char octal[10];
    int x,arr[10],len,i;
    
    cout<<"Enter an Octal Number : ";
    gets(octal);                //receiving number in string format
    
    for(i=0;octal[i]!='\0';i++)
        if(octal[i]-'0'>=8)     //to check if the entered number is in octal format
        {
            cout<<endl<<"Entered number is not in Octal Format!!!"<<endl; 
            goto lb;
        }    
        else
            arr[i]=octal[i]-'0';        //to convert char string into int array
    
    len=strlen(octal);                  
    
    cout<<endl<<"Binary Equivalent : ";
    for(i=0;i<len;i++)
    {
        x=arr[i];           //handling one number at a time
        
        switch(x)           //Binary equivalent for each x
        {
            case 0:
            cout<<"000 ";
            break;
            
            case 1:
            cout<<"001 ";
            break;
            
            case 2:
            cout<<"010 ";
            break;
            
            case 3:
            cout<<"011 ";
            break;
            
            case 4:
            cout<<"100 ";
            break;
            
            case 5:
            cout<<"101 ";
            break;
            
            case 6:
            cout<<"110 ";
            break;
            
            case 7:
            cout<<"111 ";
            break;
        }
    }
    
cout<<endl;

lb:
return 0;    
}