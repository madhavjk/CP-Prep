#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n = 5; 
	int i = 1;
	
	while(i<n)
	{
		int j =1;
		
		while(j<=i)
		{
			cout<<i*2 - 1<<' ';
			j = j+1;
		}
		
		i = i+1;
		
		cout<<' '<<endl;
	}
	
}
	
    
