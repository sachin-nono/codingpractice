<<<<<<< HEAD:RECURSIO.CPP
/*WAP to print a pattern by recursion*/
//Enter what is asked and wait and dont press enter!!!
#include<iostream>
//#include"stdlib.h"
//#include"dos.h"
using namespace std;
=======
/*
WAP to print a inverted triange pattern by recursion
for ex. for n=3, pattern will be
*	*	*
*	*
*

*/

#include<iostream>
#include<cstdlib>
#include<dos>

using namespace std;

>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Inverted Triange using Recursion.cpp
int main()
{
void recursion(int);

int x;

cout<<"Enter no of rows:";
cin>>x;

recursion(x);
<<<<<<< HEAD:RECURSIO.CPP
return 0;
=======

return 0;;
>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Inverted Triange using Recursion.cpp
}

void recursion(int x)
{
 int y=x;
 if(y!=0)
	{
	for(int i=x;i>0;i--)
		cout<<"*"<<"\t ";
	cout<<endl;
	x--;
	y--;
	recursion(y);
	}
	
	else
		{
		//sleep(1);
		cout<<"\nGood Bye!!!";
		//sleep(1);
		exit(0);
		}
}
