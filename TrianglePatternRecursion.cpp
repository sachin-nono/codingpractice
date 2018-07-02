<<<<<<< HEAD:RECUR1.CPP
/*WAP to print a pattern by recursion*/
//Enter what is asked and wait and dont press enter!!!
#include<iostream>
//#include<cstdlib>
//#include"dos"
using namespace std;
int y=0;
=======
/*
WAP to print a pattern by recursion
*/
#include<iostream>
#include<cstdlib>

using namespace std;

int y=0;

>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Triangle Pattern 2 using Recursion.cpp
int main()
{
void recursion(int);

int x;

cout<<"Enter no of rows:";
cin>>x;

recursion(x);
<<<<<<< HEAD:RECUR1.CPP
=======

>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:Triangle Pattern 2 using Recursion.cpp
return 0;
}

void recursion(int x)
{

 if(y!=x)
	{
	for(int i=y;i>-1;i--)
		cout<<"*"<<"\t";
	cout<<endl;
	y++;
	 
	recursion(x);
	
 	}
	
	else
		{
		//sleep(1);
		cout<<"\nGood Bye!!!";
		//sleep(1);
		//exit(1);
		}
}
