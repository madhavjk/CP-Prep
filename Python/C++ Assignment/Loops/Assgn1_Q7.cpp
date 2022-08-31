#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 5;
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			if(j<=i){
				cout<<i<<' ';
			}
			else{
				cout<<j<<' ';
			}
			
		}
		cout<<endl;
	}
}
	
