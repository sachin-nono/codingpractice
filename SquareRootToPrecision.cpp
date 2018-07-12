/*
    Square Root To Precision
*/

#include<iostream>
#include<iomanip>           //for setprecision() function
#include<math.h>            //for sqrt() function

using namespace std;

int main()
{
    int num, prec;
    float x;    
    
    cout<<"Enter a number : ";
    cin>>num;
    
    cout<<"\nPrecision number : ";
    cin>>prec;
    
    x=sqrt(num);
    
    cout.setf(ios::fixed);   //'fixed' flag displays floating point numbers in normal
                             //  notations - no trailing zeroes and no scientific notation
    
    cout<<"\nSquare Root of "<<num<<" correct to precision "<<prec<<" is : "<<setprecision(prec)<<x<<endl;
    
    return 0;
}