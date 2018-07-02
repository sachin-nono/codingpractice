/*
WAP to print nth fibonacci no.... 
*/
<<<<<<< HEAD:nthFibonacciNumber.CPP
#include <iostream>
=======

#include<iostream>

>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:nth Fibonacci Number.cpp
using namespace std;

int main()
{
int fn=0,sn=1,tn,no;

cout<<"Enter a no 0<=no<=1000 :";
cin>>no;
cout<<endl;

for(int i=1;i<=no;i++)
	{
	cout<<sn<<" ";
	tn=fn+sn;
	fn=sn;
	sn=tn;
	}

cout<<endl<<no<<"th Fibonacci no is :"<<fn;
return 0;
<<<<<<< HEAD:nthFibonacciNumber.CPP
}
=======
}
>>>>>>> c700d35abf4555cbf59093ede5d46135a128dc5d:nth Fibonacci Number.cpp
