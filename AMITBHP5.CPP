#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 int fn=0,sn=1,tn,n;
 cout<<"Enter no.:";
 cin>>n;
 cout<<endl;
 for(int i=0;i<n;i++)
    {
     cout<<fn<<"\t";
     tn=fn+sn;
     fn=sn;
     sn=tn;
     if(fn>n)
       break;
    }

 getch();
}
