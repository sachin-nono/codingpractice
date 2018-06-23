#include"iostream.h"
#include"conio.h"
void main()
{
 clrscr();
 int fn=0,sn=1,tn,n;
 cout<<"Enter nth no.:";
 cin>>n;
 cout<<endl;
 for(int i=0;i<n;i++)
    {
     tn=fn+sn;
     fn=sn;
     sn=tn;
    }
 cout<<"\n"<<n<<"th fibonacci no is:"<<fn;
 getch();
}
