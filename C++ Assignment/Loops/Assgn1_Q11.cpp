#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 6;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			
			
		cout<<"*"<<' ';
		}
		
		cout<<' '<<endl;
		
		
	}
	cout<<endl;
	
	for(int l=n+1; l<0; l--){
			
		for(int k =0; k<l-1; k++)
		{
			cout<<'*'<<' ';
		}
			cout<<endl;
		}
		
	}

	
