#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n = 5; 
	
    for(int i=0; i<n; i++){
		for(int j=i; j<-1; j--)
		{
			cout<<j+1<<' ';
		}
		
	cout<<endl;
	}
    
}