/*
    Recursion - Convert String To Integer
    
    Take as input a number in form of a string.
    Write a recursive function to convert the number in string form to number in integer form.
    
*/

#include<iostream>

using namespace std;

int i=0;

int main()
{
    char str[10];
    int x, checkFormat(char []);
    long num, StrToInt(char []);
    
    cout<<"Enter a number : ";
    cin>>str;    //since cin ignores or will not read white spaces or tabs or newline characters.
    
    x=checkFormat(str);
    
    if(x==1)        //if entered number contains only digits.
    {
        num=StrToInt(str);
        
        cout<<"\nNumber in integer format : "<<num<<endl;
    }
    else if(x==0)   //if entered number starts with zero and does not contain any other special symbol
    {
        num=StrToInt(str+1);
        
        cout<<"\nNumber in integer format : 0"<<num<<endl;
    }
    else if(x==-1)  //if entered number starts with a -ve sign.
    {
        num=StrToInt(str+1);
        
        cout<<"\nNumber in integer format : -"<<num<<endl;
    }
    else if(x==-2)  //if entered number starts with +ve sign.
    {
        num=StrToInt(str+1);
        
        cout<<"\nNumber in integer format : +"<<num<<endl;
    }
    else    //if entered number contains special symbol.
        cout<<"\nEntered number contains some special character!!!\n";
    
    return 0;
}

int checkFormat(char str[])
{
    if(str[0]-'0'==0)
    {
        for(int j=0; str[j]!='\0'; j++)
            if(!(isdigit(str[j])))
                return -5;
        return 0;
    }
    else if(str[0]=='-')
    {
        for(int j=0; str[j]!='\0'; j++)
            if(!(isdigit(str[j])))
                return -5;
        return -1;
    }
    else if(str[0]=='+')
    {
        for(int j=0; str[j]!='\0'; j++)
            if(!(isdigit(str[j])))
                return -5;
        return -2;
    }
    else
    {
        for(int j=0; str[j]!='\0'; j++)
            if(!(isdigit(str[j])))
                return -5;
    }
    
    return 1;
        
}

long x, number=0;

long StrToInt(char str[])
{
    if(str[i]!='\0')
    {
        x=str[i]-'0';
        number*=10;
        number+=x;
        
        i++;
        StrToInt(str);
    }
    
    return number;
}