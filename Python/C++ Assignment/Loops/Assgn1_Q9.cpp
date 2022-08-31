#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 5;
	int k = 2*n-2;
	
	for(int i=n; i<-1; i--){
		for(int j=k; j<0; j--){
			
			
			cout<<" ";
		}
		k = k+1;
		
		for(int j=0; j<i+1; j++){
			
			
			cout<<'*'<<" ";
		}
		cout<<endl;
	}
}
	
