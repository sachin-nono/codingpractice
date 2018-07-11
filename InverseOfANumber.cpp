/*
    Inverse of a number.
    
    ~Take a number as input.
    ~Assume that for a number of n digits, the value of each digit is from 1 to n and is unique.
    
    E.g. 32145 is a valid input nmuber.
         Inverse of 32145 is 12543.
    
    Write a function that returns its inverse, where inverse is defined as follows :
    In 32145, "5" is at 1st place, therefore in 12543, "1" is at 5th place.
    In 32145, "4" is at 2nd place, therefore in 12543, "2" is at 4th place.
*/

#include<iostream>

using namespace std;

int main()
{
    long number;
    int n, check, isValidNumber(long, int);
    void inverse(long, int);
    
    cout<<"Enter a digit (between 1 to 9) : ";
    cin>>n;
    
    if(n>0&&n<10)
    {  
        cout<<"\nEnter a number such that each digit is from 1 to "<<n<<" and is unique : ";
        cin>>number;
        
        check=isValidNumber(number,n);
        
        if(check!=-1)
        {
            cout<<"\nInverse : ";
            inverse(number,n);
        }
        else
            cout<<"\nYou entered a WRONG NUMBER!!!\n";
    }
    else 
        cout<<"\nEnter between 1 to 9\n";
    cout<<endl;
    return 0;
}

int isValidNumber(long number, int n)
{
    long num1=number, num2=number;
    int x, y;
    
    while(num1)         //1st condition -> 1 to n
    {
        x=num1%10;
        
        if(x>n)
            return -1;
        else
            num1=num1/10;
    }    
    
    while(n>=2)       //2nd condition -> uniqueness
    {
        x=number%10;
        
        num2=num2/10;
        
        for(int i=1;i<n;i++)
        {
            y=num2%10;
            
            if(y==x)
                return -1;
            else
                num2=num2/10;
        }
        
        n=n-1;
        number=number/10;
        num2=number;
    }
    
    return 0;
}

void inverse(long number, int n)
{
    int i=0, arr[10], x;
    
    while(number)
        {
            i=i+1;
            x=number%10;
            
            arr[x-1]=i;
        
            number/=10;
        }
    
        for(int j=n-1;j>=0;j--)
            cout<<arr[j];
}

