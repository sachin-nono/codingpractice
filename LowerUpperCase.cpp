/*
To check whether a character is lowercase or uppercase
*/

#include<iostream>
#include<ctype>

using namespace std;

int main()
{
void check(char);
char ch;

cout<<"Enter a character:";
cin>>ch;

check(ch);

return 0;;
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
