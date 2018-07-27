/*
    Take as input a number in string format.
    Assume that value of a=1,b=2,...,z=26.
    Write a recursive function (return type arraylist) to print all possible codes for the string.
    E.g. for "1123" possible codes are : aabc, kbc, alc, aaw, kw.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[26];
    int len, i=0;
    
    void caseA(char [], int), caseB(int), caseC(int, char [], int);
    
    
    cout<<"Enter a number : ";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);   //determining length of the string or number entered
    
    if(len==1)
        caseA(str,i);  
    
    else if(len%2!=0)       //when entered number is odd
    {
        caseA(str,i);    //case  to print codes for individual numbers
        
        int k=1, b=0;
        
        while(k<len)
        {
            int x=0, y, l=i, z=0;
            
            for(; i<(l+2)&&str[i]!='\0'; ++i)
            {
                x*=10;
                y=str[i]-'0';
                x+=y;
            }
            
            cout<<" , ";
            
            if(k==1)
            {
                caseB(x);       //code equivalent to two digit number
                caseA(str,i);    // codes for numbers following two digit number  
            }
            else
            {
                caseC(z,str,b);     //to print codes for numbers before two digit number
                caseB(x);           //now printing code for that two digit number
                ++b;
                caseA(str,i);       //printing codes for numbers following two digit number
            }
            ++k;
            --i;
        }
    }
    
    else
    {
        caseA(str,i);       //case  to print codes for individual numbers
        
        int k=1, b=0;
        
        while(k<len)
        {
            int x=0, y, l=i, z=0;
            
            for(; i<(l+2)&&str[i]!='\0'; ++i)
            {
                x*=10;
                y=str[i]-'0';
                x+=y;
            }
            
            cout<<"  ";
            
            if(k==1)
            {
                caseB(x);       //code equivalent to two digit number
                caseA(str,i);    // codes for numbers following two digit number  
            }
            else
            {
                caseC(z,str,b);     //to print codes for numbers before two digit number
                caseB(x);           //now printing code for that two digit number
                ++b;
                caseA(str,i);       //printing codes for numbers following two digit number
            }
            ++k;
            --i;
        }
        
        if(k==len)      //now printing codes for the sequence formed by consecutive two digit numbers
        {
            int c=0, d=0, e=0, f, g=1;
            
            cout<<"  ";
            
            while(g<=len/2)
            {
                for(; c<(d+2); ++c)
                {
                    e*=10;
                    f=str[c]-'0';
                    e+=f;
                }
                
                caseB(e);
                
                e=0;
                d=c;
                ++g;
            }
        }
    }
    cout<<endl;
    
    return 0;
}

void caseA(char str[], int i)
{
    for(; str[i]!='\0'; ++i)
    {
        int ch=str[i]-'0';
        
        switch(ch)
        {
            case 1 :
                        cout<<"a";
                        break;
            
            case 2 :
                        cout<<"b";
                        break;
            
            case 3 :
                        cout<<"c";
                        break;
            
            case 4 :
                        cout<<"d";
                        break;
            
            case 5 :
                        cout<<"e";
                        break;
            
            case 6 :
                        cout<<"f";
                        break;
            
            case 7 :
                        cout<<"g";
                        break;
            
            case 8 :
                        cout<<"h";
                        break;
            
            case 9 :
                        cout<<"i";
                        break;
            
            case 10 :
                        cout<<"j";
                        break;
            
            case 11 :
                        cout<<"k";
                        break;
            
            case 12 :
                        cout<<"l";
                        break;
            
            case 13 :
                        cout<<"m";
                        break;
            
            case 14 :
                        cout<<"n";
                        break;
            
            case 15 :
                        cout<<"o";
                        break;
            
            case 16 :
                        cout<<"p";
                        break;
            
            case 17 :
                        cout<<"q";
                        break;
            
            case 18 :
                        cout<<"r";
                        break;
            
            case 19 :
                        cout<<"s";
                        break;
            
            case 20 :
                        cout<<"t";
                        break;
            
            case 21 :
                        cout<<"u";
                        break;
            
            case 22 :
                        cout<<"v";
                        break;
            
            case 23 :
                        cout<<"w";
                        break;
            
            case 24 :
                        cout<<"x";
                        break;
            
            case 25 :
                        cout<<"y";
                        break;
            
            case 26 :
                        cout<<"z";
                        break;
        }
    }
}

void caseB(int num)
{
    switch(num)
        {
            case 1 :
                        cout<<"a";
                        break;
            
            case 2 :
                        cout<<"b";
                        break;
            
            case 3 :
                        cout<<"c";
                        break;
            
            case 4 :
                        cout<<"d";
                        break;
            
            case 5 :
                        cout<<"e";
                        break;
            
            case 6 :
                        cout<<"f";
                        break;
            
            case 7 :
                        cout<<"g";
                        break;
            
            case 8 :
                        cout<<"h";
                        break;
            
            case 9 :
                        cout<<"i";
                        break;
            
            case 10 :
                        cout<<"j";
                        break;
            
            case 11 :
                        cout<<"k";
                        break;
            
            case 12 :
                        cout<<"l";
                        break;
            
            case 13 :
                        cout<<"m";
                        break;
            
            case 14 :
                        cout<<"n";
                        break;
            
            case 15 :
                        cout<<"o";
                        break;
            
            case 16 :
                        cout<<"p";
                        break;
            
            case 17 :
                        cout<<"q";
                        break;
            
            case 18 :
                        cout<<"r";
                        break;
            
            case 19 :
                        cout<<"s";
                        break;
            
            case 20 :
                        cout<<"t";
                        break;
            
            case 21 :
                        cout<<"u";
                        break;
            
            case 22 :
                        cout<<"v";
                        break;
            
            case 23 :
                        cout<<"w";
                        break;
            
            case 24 :
                        cout<<"x";
                        break;
            
            case 25 :
                        cout<<"y";
                        break;
            
            case 26 :
                        cout<<"z";
                        break;
                        
            default :
                        cout<<"_";
        }
}

void caseC(int z, char str[], int b)
{
    while(z<=b)
    {
        int a=str[z]-'0';
        switch(a)
        {
            case 1 :
                        cout<<"a";
                        break;
            
            case 2 :
                        cout<<"b";
                        break;
            
            case 3 :
                        cout<<"c";
                        break;
            
            case 4 :
                        cout<<"d";
                        break;
            
            case 5 :
                        cout<<"e";
                        break;
            
            case 6 :
                        cout<<"f";
                        break;
            
            case 7 :
                        cout<<"g";
                        break;
            
            case 8 :
                        cout<<"h";
                        break;
            
            case 9 :
                        cout<<"i";
                        break;
            
            case 10 :
                        cout<<"j";
                        break;
            
            case 11 :
                        cout<<"k";
                        break;
            
            case 12 :
                        cout<<"l";
                        break;
            
            case 13 :
                        cout<<"m";
                        break;
            
            case 14 :
                        cout<<"n";
                        break;
            
            case 15 :
                        cout<<"o";
                        break;
            
            case 16 :
                        cout<<"p";
                        break;
            
            case 17 :
                        cout<<"q";
                        break;
            
            case 18 :
                        cout<<"r";
                        break;
            
            case 19 :
                        cout<<"s";
                        break;
            
            case 20 :
                        cout<<"t";
                        break;
            
            case 21 :
                        cout<<"u";
                        break;
            
            case 22 :
                        cout<<"v";
                        break;
            
            case 23 :
                        cout<<"w";
                        break;
            
            case 24 :
                        cout<<"x";
                        break;
            
            case 25 :
                        cout<<"y";
                        break;
            
            case 26 :
                        cout<<"z";
                        break;
        }
        
        ++z;
    }
}
