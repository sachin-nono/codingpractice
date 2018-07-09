/*
    Array Spiral Print Clockwise
*/

#include<iostream>

using namespace std;

int main()
{
    int m, n, i, j, l=1, x;
    
    cout<<"Enter size :"<<endl;
    cin>>m>>n;
    
    cout<<endl<<m<<" * "<<n<<" integers are (2 D Array Numbers) :"<<endl;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cout<<i<<j<<"\t";
            cout<<endl;
        }
    cout<<endl;
    
    if(m%2==0&&n%2==0)      //when both m and n are even
    {
        if(m>n)         
            x=n/2;
        
        else if(m<n)
            x=m/2;
        
        else
            x=m/2;      //when both are equal and even
    }
    else
    {
        if(m==n)            //when both are equal and odd
            x=m/2+1;
        if(m%2==0)
            x=m/2;
        else 
            x=n/2;
    }
    
    
    do
    {
        i=j=l;
        
        for(;j<=n;j++)          //first row
            cout<<i<<j<<" , ";
        
        for(i+=1,j=n;i<=m;i++)         //last column
            cout<<i<<j<<" , ";
        
        for(i=m,j=n-1;j>=l;j--)         //last row
            cout<<i<<j<<" , ";
        
        for(i=m-1,j=l;i>=l+1;i--)         //first column
            cout<<i<<j<<" , ";      
        
        n--;
        m--;
        l++;
        x--;
    }while(x>=1);
    
    cout<<" END\n";
    
    return 0;
    
}