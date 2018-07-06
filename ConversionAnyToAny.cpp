/*
    Conversion Any To Any
*/

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    int sb,db;
    void BinToOct(char []),OctToBin(char []),DecToBin(long);
    long BinToDec(long),OctToDec(long),DecToOct(long);
    
    //pascal casing for function names
    
    cout<<"Enter source number system base i.e.,"<<endl;
    cout<<"input type of number either binary(2) or decimal(10) or octal(8) : ";
    cin>>sb;
    
    cout<<endl<<"Enter destination number system base i.e.,"<<endl;
    cout<<"convert to octal(8) or decimal(10) or binary(2) : ";
    cin>>db;
    
    if(sb==2&&db==8)        //Binary To Octal
    {
        char bin[20];
               
        cout<<endl<<"Enter a binary number : ";
        gets(bin);
        
        BinToOct(bin);
        
    }
        else if(sb==2&&db==10)      //Binary To Decimal
        {
            long bin,dec;
            
            cout<<endl<<"Enter a Binary Number : ";
            cin>>bin;
            
            dec=BinToDec(bin);
            
            cout<<endl<<"Decimal Equivalent : "<<dec<<endl;
            
        }       
            else if(sb==8&&db==2)           //Octal To Binary
            {
                char octal[10];
                
                cout<<endl<<"Enter an Octal Number : ";
                gets(octal);
                
                OctToBin(octal);
            }       
                
                else if(sb==8&&db==10)          //Octal To Decimal
                {
                    long octal,dec;
                    
                    cout<<endl<<"Enter an Octal Number : ";
                    cin>>octal;
                    
                    dec=OctToDec(octal);
                    
                    cout<<endl<<"Decimal Equivalent : "<<dec<<endl;
                }     
                else if(sb==10&&db==2)          //Decimal To Binary
                {
                    long dec;
                    
                    cout<<endl<<"Enter a Decimal Number : ";
                    cin>>dec;
                    
                    DecToBin(dec);
                }
                        else if(sb==10&&db==8)          //Decimal To Octal
                        {
                            long decimal,octal;
                            
                            cout<<endl<<"Enter a Decimal Number : ";
                            cin>>decimal;
                            
                            octal=DecToOct(decimal);
                            cout<<endl<<"Octal Equivalent : "<<octal<<endl;
                        }
                            else
                                cout<<endl<<"\nWrong Choice!!!\n"; 
    
    return 0;
}

// void convertToRadix(num, toRadix)


void BinToOct(char bin[])         //Binary To Octal
{
    char temp;
    int len,oct=0,i,j,x;
    
    len=strlen(bin);
    
    for(i=0,j=len-1;bin[i]!='\0';i++,j--)   //reversing numbers
    {
        if(bin[i]-'0'==0||bin[i]-'0'==1)
        {
            temp=bin[i];
            bin[i]=bin[j];
            bin[j]=temp;
        }
        else
        {
            cout<<endl<<"Entered number is not a Binary Number!!!";
            goto mb;
        }
    }
    
    i=0;
    
    cout<<endl<<"Octal Equivalent : ";
    
    lb:for(j=0;j<3||bin[i]!='\0';i++,j++)
    {
        x=(bin[i]-'0');
        oct=oct+(x*pow(2,j));
        
    }
    cout<<oct;
    oct=0;
    
    if(bin[i]!='\0')
        goto lb;
 
mb: 
    cout<<endl;   
}


long BinToDec(long bin)           //Binary To Decimal
{
    long dec=0,x;
    int i=0;
    
    while(bin)
    {
        x=bin%10;
        dec=dec+x*pow(2,i);
        i++;
        bin/=10;
    }
    
    return dec;
}


void OctToBin(char octal[])       //Octal To Binary
{
    int x,arr[10],len,i;
    
    for(i=0;octal[i]!='\0';i++)
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
            
            default :
            cout<<endl<<"Entered number is not an octal number!!!";
        }
    }   
cout<<endl;
}


long OctToDec(long octal)         //Octal To Decimal
{
    long dec=0,x;
    int i=0;
      
    while(octal)
    {
        x=octal%10;
        dec=dec+x*pow(8,i);
        i++;
        octal/=10;
    }
    
    return dec;
}


void DecToBin(long dec)           //Decimal To Binary
{
    long bin[20];
    int i=0,j;
        
    while(dec)
    {
        bin[i]=dec%2;
        dec/=2;
        i++;
    }
    
    cout<<endl<<"Binary Equivalent : ";
    for(j=i-1;j>-1;j--)
        cout<<bin[j];
    
    cout<<endl;
}


long DecToOct(long decimal)         //Decimal To Octal
{
    long octal=0,i=1;
    int rem;
        
    while(decimal)
    {
        rem=decimal%8;
        octal=octal+(rem*i);
        i*=10;
        decimal/=8;
    }
       
    return octal;
}