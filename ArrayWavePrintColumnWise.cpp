/*
    Arrays - Wave Print Column Wise
*/

#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,x;
    
    cout<<"Enter Size :"<<endl;
    cin>>m>>n;
    
    cout<<m<<" * "<<n<<" integers are ( 2-D Array Numbers ) :"<<endl;
    
    for(i=1;i<=m;i++)           //printing array numbers
    {
        cout<<endl;
        for(j=1;j<=n;j++)
            cout<<i<<j<<"\t";
    }
    cout<<endl;
    
    j=1;
    
    do                      //printing wave column wise
    {
        for(i=1;i<=m;i++)
        {
            cout<<i<<j<<" , ";
        
            x=i;
            
            if(x==m)
            {
                j++;
                for(;x>=1;x--)
                    cout<<x<<j<<" , ";
            }
        }
    j++;
    }while(j<=n);
    
    cout<<endl;
    return 0;
}