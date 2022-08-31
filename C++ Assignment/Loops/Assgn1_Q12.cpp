#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 5;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			
			
		cout<<"*"<<' ';
		}
		
		cout<<endl;
		
		
	}
	
	for(int i=n; i<0; i--){
			
		for(int j =0; j<i-1; j++)
		{
			std::cout<<'*'<<' ';
		}
			std::cout<<endl;
		}
		
	}

	
