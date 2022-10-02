/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	temp=a; 
	a=b;
	b=temp;
	cout<<"\nAfter swapping numbers are : ";
	cout<<a<<" "<<b;

	
	return 0;
}

