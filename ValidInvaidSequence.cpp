/*
    Valid-Invalid Sequence
    
    Enter a number n. Enter n more elements such that they form a sequence.
    Compute if it is possible to split up the sequence in two halves such that 
    first half follows the sequence of strictly decreasing and 
    second half follows the sequence of strictly increasing numbers.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,arr[100],dec,inc,checkdec,checkinc;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    if(n!=0)
    {
        cout<<"\nEnter "<<n<<" more elements such that first half follows the sequence of strictly decreasing and second half follows the sequence of strictly increasing :\n\n";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        dec=arr[0];
        inc=arr[n/2];
        
        for(int i=0;i<n/2;i++)      //first half is computed
            if(arr[i]>dec)
            {
                checkdec=-1;        //if order is not followed, then checkdec becomes -1 and  
                break;              //the loop will be terminated. 
            }
            else
                checkdec=1;
    
        for(int i=n/2;i<n;i++)      //second half is computed
            if(arr[i]<inc)
            {
                checkinc=-1;        //if order is not followed, then checkinc becomes -1 and
                break;              //the loop will be terminated.
            }
            else
                checkinc=1;
        
        if(checkdec!=-1&&checkinc!=-1)      //if both are not -1, it means entered sequence is correct
            cout<<"\nTRUE\n";
        else
            cout<<"\nFALSE\n";
    }
    else
        cout<<"\nEnter a non-zero number and positive number!!!\n";
    return 0;
}