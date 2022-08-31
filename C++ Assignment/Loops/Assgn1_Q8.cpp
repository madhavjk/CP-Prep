#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	
	int n = 8;
	int square =0;
	for(int i=1; i<n+1; i++){
		for(int j=1; j<i+1; j++){
			
			square = i*j;
			cout<<i*j<<' ';
		}
		cout<<endl;
	}
}
	
