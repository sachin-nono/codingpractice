/*
    Remove Duplicate Letters. 
    
    for ex. , if input is - hello
                 output should be - helo
*/
#include<iostream>

using namespace std;

int main()
{
void duplicate(char []);
char str[26];

cout<<"Enter a string:";
gets(str);

duplicate(str);

return 0;
}

void duplicate(char str[])
{
int i=0;
	
while(str[i]!='\0')
	{
	if(str[i]==str[i+1])
		str[i]=str[i+1];
	i+=1;
	}
	
cout<<"\nAfter removing duplicates:\n";
puts(str);
}
