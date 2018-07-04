/*
Convert Binary Number to Decimal Number
*/

#include<iostream>
#include<math.h>                //for function pow()
#include<string.h>              //for function strlen()

using namespace std;

int main()
{
    char str[20],temp;
    int x;
    int bintodec(char []);
    
    cout<<"Enter a Binary Number : "<<endl;
    gets(str);
    
    int j=strlen(str)-1;        //to calculate string length 
    
    for(int i=0;i<=j;i++,j--)   //to reverse string elements so that 1's or 0's can 
    {                           //be multiplied by correct powers of 2
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    
    x=bintodec(str);            //function call to convert to decimal number
    
    if(x!=-1)
        cout<<"Decimal Equivalent : "<<x<<endl;
    else
        cout<<"It is not a binary number!!!"<<endl;
    return 0;
}

int bintodec(char str[])
{
    int num,dec=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]-'0'==0||str[i]-'0'==1)        //to check if str[i] is 1 or 0
        {
            num=str[i]-'0';
            dec=dec+num*pow(2,i);
        }
        else                                    //if str[i] is neither 1 nor 0, then return -1
            return -1;
    }
    return dec;
}