/*
    Arrays - Wave Print Row Wise.
*/

#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,x;
    
    cout<<"Enter size :"<<endl;
    cin>>m>>n;
    
    cout<<endl<<m<<" * "<<n<<" integers are (i.e. array numbers) :"<<endl;
    
    for(i=1;i<=m;i++)       //Printing Array Numbers
    {
        cout<<endl;
        for(j=1;j<=n;j++)
            cout<<i<<j<<"\t";
    }
    
    cout<<endl;
    
    i=1;
  
    do          //Printing Wave of Array Numbers
    {
        for(j=1;j<=n;j++)
        {
            cout<<i<<j<<" , ";      
            
            x=j;
            
            if(x==n)
            {
            i++;
            for(;x>=1;x--)
                cout<<i<<x<<" , ";
            }  
        }
    i++;        
    
    }while(i<=m);
    
    return 0;
}