/*
    Conversion Any To Any
*/

#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

int main()
{
    long decimal;
    
    int choice, len, dec, BinToDec(char [], int),  OctToDec(char [], int), HexdToDec(char [], int);
    
    void BinToOct(char [], int), BinToHex(char [], int), OctToBin(char []);
    void DecToBin(long), DecToOct(long), DecToHex(long), HexdToBin(char []);
    char bin[20], oct[20], hexd[20];
    
    
    cout<<"MENU :"<<endl;
    cout<<"1. Binary To Octal.\n"<<"2. Binary To Decimal.\n"<<"3. Binary To Hexadecimal.\n";
        
    cout<<"\n4. Octal To Binary.\n"<<"5. Octal To Decimal.\n";
        
    cout<<"\n6. Decimal To Binary. \n"<<"7. Decimal To Octal. \n"<<"8. Decimal To Hexadecimal. \n";
        
    cout<<"\n9. Hexadecimal To Binary."<<"\n10. Hexadecimal To Decimal. \n";
        
    cout<<"\nEnter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 :
        
                cout<<"\nEnter Binary Number : ";
                cin>>bin;           //because gets() function is not working
        
                len=strlen(bin);
        
                cout<<"\nOctal Equivalent : ";
        
                BinToOct(bin,len);
                
                break;
        
        case 2 :
        
                cout<<"\nEnter Binary Number : ";
                cin>>bin;           //because gets() function is not working
                
                len=strlen(bin);
                
                dec=BinToDec(bin,len);
                
                cout<<"\nDecimal Equivalent : "<<dec<<endl;
                
                break;
        
        case 3 :
                cout<<"\nEnter Binary Number : ";
                cin>>bin;
                
                len=strlen(bin);
                
                cout<<"\nHexadecimal Equivalent : ";
                
                BinToHex(bin,len);
                
                break;
       
        case 4 :
                cout<<"\nEnter an Octal Number : ";
                cin>>oct;
                
                cout<<"\nBinary Equivalent : ";
                
                OctToBin(oct);
                
                break;
        
        case 5 :
                cout<<"\nEnter an Octal Number : ";
                cin>>oct;
                
                len=strlen(oct);
                
                dec=OctToDec(oct,len);
                
                cout<<"\nDecimal Equivalent : "<<dec<<endl;
                
                break;
        
        case 6 :
                cout<<"\nEnter a Decimal Number : ";
                cin>>decimal;
                
                cout<<"\nBinary Equivalent : ";
                
                DecToBin(decimal);
                
                break;
        
        case 7 :
                cout<<"\nEnter a Decimal Number : ";
                cin>>decimal;
                
                cout<<"\nOctal Equivalent : ";
                
                DecToOct(decimal);
                
                break;
        
        case 8 :
                cout<<"\nEnter a Decimal Number : ";
                cin>>decimal;
                
                cout<<"\nHexadecimal Equivalent : ";
                
                DecToHex(decimal);
                
                break;
        
        case 9 :
                cout<<"\nEnter a Hexadecimal Number : ";
                cin>>hexd;
                
                cout<<"\nBinary Equivalent : ";
                
                HexdToBin(hexd);
                
                break;
        
        case 10 :
                 cout<<"\nEnter a Hexadecimal Number : ";
                 cin>>hexd;
                 
                 len=strlen(hexd);
                 
                 dec=HexdToDec(hexd,len);
                 
                 cout<<"\nDecimal Equivalent : "<<dec<<endl;
                 
                 break;
        
        default :
                 cout<<"\nWRONG CHOICE!!!\n";
    }
    
    return 0;
}

void BinToOct(char bin[], int len)      //Binary To Octal
{
    int a, arr[7], j=-1, sum=0, i=len-1, x;
    
    lb:for(a=0;(i>=0&&a<=2);i--,a++)
       {
           x=bin[i]-'0';
           sum=sum+x*pow(2,a);
       }
       
    j++;
    arr[j]=sum;
    
    sum=0;
        
    if(i>=0)
        goto lb;
    
    for(;j>=0;j--)
        cout<<arr[j];
    
    cout<<endl;
}


int BinToDec(char bin[], int len)       //Binary To Decimal 
{   
    int x, sum=0;
    for(int i=len-1,a=0;i>=0;i--,a++)
    {
        x=bin[i]-'0';
        
        sum+=x*pow(2,a);
    }
    
    return sum;    
}    


void BinToHex(char bin[], int len)      //Binary To Hexadecimal
{
    int j=-1, x, sum=0, a, i=len-1;
    char arr[7];
    
    lb:for(a=0;(i>=0&&a<=3);i--,a++)
    {
        x=bin[i]-'0';
        
        sum+=x*pow(2,a);
    }
    
    j++;
    
    switch(sum)
    {
        case 10 :
                 arr[j]='A';
                 break;
                 
        case 11 :
                 arr[j]='B';
                 break;
                 
        case 12 :
                 arr[j]='C';
                 break;
                 
        case 13 :
                 arr[j]='D';
                 break;
                 
        case 14 :
                 arr[j]='E';
                 break;
                 
        case 15 :
                 arr[j]='F';
                 break;
        
        default :
                 arr[j]=sum+'0';
    }
    
    sum=0;
    
    if(i>=0)
        goto lb;
    
    for(;j>=0;j--)
        cout<<arr[j];
    
    cout<<endl;
}



void OctToBin(char oct[])               //Octal To Binary
{
    
    
    int x;
    
    for(int i=0;oct[i]!='\0';i++)
    {
        x=oct[i]-'0';
        
        switch(x)
        {
            case 0 :    cout<<"000 ";
                        break;
                        
            case 1 :    cout<<"001 ";
                        break;
                        
            case 2 :    cout<<"010 ";
                        break;
                        
            case 3 :    cout<<"011 ";
                        break;
                        
            case 4 :    cout<<"100 ";
                        break;
                        
            case 5 :    cout<<"101 ";
                        break;
                        
            case 6 :    cout<<"110 ";
                        break;
                        
            case 7 :    cout<<"111 ";
                        break;
        }
    }
    cout<<endl;
}


int OctToDec(char oct[], int len)       //Octal To Decimal
{
    int sum=0, x;
    for(int i=len-1,a=0;i>=0;i--,a++)
    {
        x=oct[i]-'0';
        
        sum+=x*pow(8,a);
    }
    return sum;
}



void DecToBin(long decimal)             //Decimal To Binary
{
    int j=-1, rem[7];
    
    while(decimal)
    {
        j++;
        
        rem[j]=decimal%2;
        decimal/=2;
        
    }
    
    for(;j>=0;j--)
        cout<<rem[j];
    cout<<endl;
}

void DecToOct(long decimal)             //Decimal To Binary
{
    int j=-1, rem[7];
    
    while(decimal)
    {
        j++;
        
        rem[j]=decimal%8;
        decimal/=8;
    }
    
    for(;j>=0;j--)
        cout<<rem[j];
    
    cout<<endl;
}

void DecToHex(long decimal)             //Decimal To Hexadecimal
{
    int j=-1, rem[7];
    
    while(decimal)
    {
        j++;
        
        rem[j]=(decimal%16);
        decimal/=16;
    }
    
    for(;j>=0;j--)
    {
        switch(rem[j])
        {
            case 10 :
                        cout<<"A";
                        break;
                        
            case 11 :
                        cout<<"B";
                        break;
                        
            case 12 :
                        cout<<"C";
                        break;
                        
            case 13 :
                        cout<<"D";
                        break;
                        
            case 14 :
                        cout<<"E";
                        break;
                        
            case 15 :
                        cout<<"F";
                        break;
                        
            default :
                        cout<<rem[j];
        }
    }
    cout<<endl;
}



void HexdToBin(char hexd[])             //Hexadecimal To Binary
{
    for(int i=0;hexd[i]!='\0';i++)
    {
        switch(hexd[i])
        {
            case '0' :
                        cout<<"0000 ";
                        break;
            case '1' :
                        cout<<"0001 ";
                        break;
            case '2' :
                        cout<<"0010 ";
                        break;
            case '3' :
                        cout<<"0011 ";
                        break;
            case '4' :
                        cout<<"0100 ";
                        break;
            case '5' :
                        cout<<"0101 ";
                        break;
            case '6' :
                        cout<<"0110 ";
                        break;
            case '7' :
                        cout<<"0111 ";
                        break;
            case '8' :
                        cout<<"1000 ";
                        break;
            case '9' :
                        cout<<"1001 ";
                        break;
            case 'A' :
                        cout<<"1010 ";
                        break;
            case 'B' :
                        cout<<"1011 ";
                        break;
            case 'C' :
                        cout<<"1100 ";
                        break;
            case 'D' :
                        cout<<"1101 ";
                        break;
            case 'E' :
                        cout<<"1110 ";
                        break;
            case 'F' :
                        cout<<"1111 ";
                        break;
        }
    }
    
}


int HexdToDec(char hexd [], int len)                        //Hexadecimal To Decimal
{
    int x, sum=0;
    for(int i=len-1, a=0; i>=0; i--,a++)
    {
        switch(hexd[i])
        {
            case 'A' :
            {
                x=10;
                sum+=x*pow(16,a);
                
                break;
            }
            
            case 'B' :
            {
                x=11;
                sum+=x*pow(16,a);
                
                break;
            }
            
            case 'C' :
            {
                x=12;
                sum+=x*pow(16,a);
                
                break;
            }
            
            case 'D' :
            {
                x=13;
                sum+=x*pow(16,a);
                
                break;
            }
            
            case 'E' :
            {
                x=14;
                sum+=x*pow(16,a);
                
                break;
            }
            
            case 'F' :
            {
                x=15;
                sum+=x*pow(16,a);
                
                break;
            }
            
            default :
            {
                x=hexd[i]-'0';
                sum+=x*pow(16,a);
            }
        }
        
    }
    
    return sum;
}
