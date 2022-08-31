#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int a = 1; 
	int b = 2;
	int n = b;
	for(int i=2; i<6; i++){
		for(int j=a; j<b; j++){
			n = n -1;
			cout<<n<<' ';
		}
		cout<<""<<endl;
		a =b;
		b = b + i;
		n =b;
	}
	
}
	
