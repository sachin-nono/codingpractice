/*
    Print Integral Part of a Square Root
*/

#include<iostream>

using namespace std;

int main()
{
    int squareroot(double),x;
    double y;
       
    cout<<"Enter number : ";
    cin>>y;
    
    x=squareroot(y);
    
    cout<<endl<<"Integral Part of Square Root of "<<y<<" is : "<<x<<endl;
    return 0;
}

int squareroot(double y)
{
    int i=1;
    
    while(i*i<=y)
        i++;
    
    return i-1;
}