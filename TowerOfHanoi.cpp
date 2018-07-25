/*
    Tower Of Hanoi
    
    Move all rings from peg A to peg B using a heping peg C.
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    void towerOfHanoi(int, char, char, char);
    
    cout<<"Enter number of rings : ";
    cin>>n;
    
    if(n!=0)
        towerOfHanoi(n,'A','B','C');
    else
        cout<<endl<<"number of rings cannot be zero !!!"<<endl;
    
    cout<<endl;
    
    return 0;
}

void towerOfHanoi(int n, char A, char B, char C)
{
    if(n==1)
    {
        cout<<endl<<"moving ring 1 from "<<A<<" to "<<B;
        return;
    }

    
        towerOfHanoi(n-1,A,C,B);
        
        cout<<endl<<"moving ring "<<n<<" from "<<A<<" to "<<B;
        
        towerOfHanoi(n-1,C,B,A);
}