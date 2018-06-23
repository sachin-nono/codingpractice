#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct node
{
 int data;
 node *next;
};
class stack
{
 node *top;
 public:
 stack()
 {top=null;}

 void push()
 {
  node *temp;
  temp=newnode;
  cout<<"enter data ";
  cin>>temp->data;
  temp->next=top;
  top=temp;
 }
 void pop()
 {
  if(top!=null)
  {
   node *temp=top;
   top=top->next;
   cout<<temp->data<<"deleted";
   delete temp;
  }
  else
  cout<<"stack empty";
 }
 void display()
 {
  node *temp=top;
  while(temp!=null)
  {
   cout<<temp->data<<" ";
   temp=temp->next;
  }
 }
 ~stack()
 {
  while(top!=null)
  {
   node *temp=top;
   top=top->next;
   delete temp;
  }
 }
 void main()
 {
  clrscr();
  stack s;
  int ch;

 do{
    cout<<"1.PUSH \n"
	<<"2.POP \n"
	<<"3.DISPLAY \n"
	<<"4.EXIT \n"
	<<"ENTER YOUR CHOICE : ";
    cin>>ch;

  switch(ch)
  {
   case 1:
     push();
     break;

   case 2:
     pop();
     break;

   case 3:
     display();
     break;
   }
  }while(ch!=4)
 getch();
}