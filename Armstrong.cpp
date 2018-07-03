/*
    Armstrong Number - An Armstrong Number of three digits is an integer such
    that the sum of the cubes its digits is equal to the number itself.
    Print TRUE if it is otherwise FALSE
*/

#include "iostream"
// #include "conio.h"  Do not use conio.h NON-STANDARD HEADER FILE

// format/indent your code properly
using namespace std;


int main() // In C++ main should always return a value.
{
    // clrscr(); NON-STANDARD FUNCTION
    long num;
    
    void isarms(long); //Explain this statement

    cout << "Enter a number:"<<endl; // endl is used for newline.
    cin >> num;

    isarms(num);

    // getch(); NON-STANDARD FUNCTION
    return 0;
}

void isarms(long num)
{
    long a = num, sum = 0, x;

    while(a)
    {
        x = a % 10;
        sum = sum + (x * x * x);
        a /= 10;
    }

    if(sum == num)
        cout << "TRUE";
    else
        cout << "FALSE";
}
