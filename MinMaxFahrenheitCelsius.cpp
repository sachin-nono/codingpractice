/*
    Conversion Fahrenheit To Celsius
    
    Take the following as input:
    1. Minimum Fahrenheit Value.
    2. Maximum Fahrenheit Value.
    3. Step.
    
    Print as output the Celsius Conversion. Use the formula C = (5/9)(F-32).
    
    First number in every output line is Fahrenheit, second number is Celsius.
    The two numbers are seperated by a tab.
*/

#include<iostream>

using namespace std;

int main()
{
    int minF, maxF, step, c;
    
    cout<<"Enter minimum Fahrenheit value : ";
    cin>>minF;
    
    cout<<endl<<"Enter maximum Fahrenheit value : ";
    cin>>maxF;
    
    cout<<endl<<"Enter step value ( >0 ) : ";
    cin>>step;
    
    if(step!=0)
    {
        for(int i=minF; i<=maxF; i=i+step)
            {
                c=((i-32)*5)/9;     //since c is int type 5/9 will always give 0. The formula is still the same but
                                    //now precedence is changed as (i-32)*5 will be evaluated first and then divide by 9.
                                    
                cout<<i<<"\t"<<c<<endl;
            }
    }
    else
        cout<<endl<<"Step value should be greater than 0 !!!";
    
    return 0;
}