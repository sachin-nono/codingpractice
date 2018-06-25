/*To check whether a character is lowercase or uppercase
*/
#include"iostream.h"
#include"conio.h"
#include"ctype.h"
void main()
{
clrscr();
void check(char);
char ch;
cout<<"Enter a character:";
cin>>ch;
check(ch);
getch();
}
void check(char ch)
{
if(isalpha(ch))
	{
	if(islower(ch))
		cout<<"\nlowercase!!";
		else
			cout<<"\nUPPERCASE!!!";
	}
	else
		cout<<"\nInvalid Character";
}