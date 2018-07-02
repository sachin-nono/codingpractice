#include<fstream>

using namespace std;

int main()
{ 
int x[10],ch,i;

cout<<"enter any 10 elements";
for(i=0;i<10;i++)
	cin>>x[i];

cout<<"MENU DRIVEN PROGRAM"
    <<"\n 1. print even no. at even position"
    <<"\n 2. print odd no. at odd position"
    <<"\n3. exit\nenter your choice";
cin>>ch;

switch(ch)
  {
   case 1:
	  for(i=0;i<10;i++)
        	{ 
		if (x[i]%2==0 && i%2==0)
	              cout<<"position"<<i+1<<"\n number is"<<x[i];
	        }
	  break;

   case 2:
	  for(i=0;i<10;i++)
	        { if (x[i]%2!=0 && i%2!=0)
	                cout<<"position"<<i+1<<"\n number is"<<x[i];
	        }
	  break;
   }while(ch!=3);
   
return 0;
}
