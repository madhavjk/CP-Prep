#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 7;
	int m = (2*n)-2;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			
			
			cout<<" ";
		}
		m = m-1;
		
		for(int j=0; j<i+1; j++){
			
			
			cout<<"*"<<' ';
		}
		cout<<endl;
	}
}
	
