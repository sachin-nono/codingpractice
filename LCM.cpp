/*
    LCM ( Least Common Multiple)
*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, x;
    
    cout<<"Enter two +ve numbers :\n";
    cin>>num1>>num2;
    
    x=((num1>num2) ? num1 : num2);
    
    if(num1==0||num2==0)
        cout<<"\nValues must be non-zero!!!\n";
    else
    {
        while(1)
        {
            if(x%num1==0&&x%num2==0)
            {
                cout<<"\nLCM of "<<num1<<" and "<<num2<<" is : "<<x<<endl;
                break;
            }
            
            ++x;
        }
    }
    
    return 0;
}