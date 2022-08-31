#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n = 5; 
	
    for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++)
		{
			cout<<n<<' ';
		}
		
	cout<<endl;
	}
    
}