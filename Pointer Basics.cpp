/*Pointer Basics*/
#include<iostream>
#include<conio>

using namespace std;

int main()
{
int *ip[5];
int a=5,b=10,c=15,d=20,e=25;

ip[0]=&a;
ip[1]=&b;
ip[2]=&c;
ip[3]=&d;
ip[4]=&e;

cout<<"ip ="<<ip<<"\n"<<"ip+1 ="<<ip+1<<"\n"<<"ip+2 ="<<ip+2;
cout<<"\n\n";

cout<<"ip[0] ="<<ip[0]<<"\n"<<"ip[1] ="<<ip[1]<<"\n"<<"ip[2] ="<<ip[2];
cout<<"\n\n";

cout<<"*ip[0] ="<<*ip[0]<<"\n"<<"*ip[1] ="<<*ip[1]<<"\n"<<"*ip[2] ="<<*ip[2];
cout<<"\n\n";

cout<<"*ip ="<<*ip<<"\n"<<"*(ip+1) ="<<*(ip+1)<<"\n"<<"*(ip+2) ="<<*(ip+2);
cout<<"\n\n";

cout<<"*(*ip) ="<<*(*ip)<<"\n"<<"*(*(ip+1)) ="<<*(*(ip+1))<<"\n"<<"*(*(ip+2)) ="<<*(*(ip+2));
/* for(int i=0;i<5;i++)
 {
  cout<<"\naddress of ip["<<i<<"] :"<<ip[i];
  cout<<"\nvalue pointed by ip["<<i<<"] :"<<*ip[i];
  cout<<"\nvalue pointed to by ip["<<i<<"] :"<<**ip[i];
  }*/

return 0;
}
