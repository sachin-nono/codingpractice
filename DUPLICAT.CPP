#include"iostream.h"
#include"conio.h"
#include"stdio.h"
void main()
{
clrscr();
void duplicate(char []);
char str[26];

cout<<"Enter a string:";
gets(str);
duplicate(str);
getch();
}

void duplicate(char str[])
{
int i=0;
while(str[i]!='\0')
	{
	if(str[i]==str[i+1])
		str[i+1]=' ';
	i+=1;
	}
cout<<"\nAfter removing duplicates:\n";
puts(str);
}