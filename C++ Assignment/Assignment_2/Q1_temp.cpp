/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
float centigrade;
float fahrenheit;
cout<<"Enter temp. in Fahrenheit: ";
cin>>fahrenheit;
cout<<endl;
centigrade = (fahrenheit - 32) * 5/9;


cout<<"Temp. in Celsius: "<<centigrade;
return 0;
}