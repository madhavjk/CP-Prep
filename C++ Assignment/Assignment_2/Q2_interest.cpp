/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
 int principle,rate,time,interest;
 cout<<" Enter Principle : ";

 cin>>principle;
 cout<<endl;
 cout<<" Enter Rate : ";
 cin>>rate;
 cout<<endl;
 cout<<" Enter Time : ";
 cin>>time;
 cout<<endl;
 interest = (principle * rate * time)/100;
 cout<<" Simple interest is : "<< interest;
 return 0;
}
