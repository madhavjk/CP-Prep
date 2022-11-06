#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--){
	    
	    int n;
	    
	    cin>>n;
	    
	    int a[n];
	    set<int> set1;
	    
	    for(int i=0; i<n; i++){
	        
	        cin>>a[i];
	        set1.insert(a[i]);
	    }
	    
	    cout<<set1.size();
	    
	}
	
	return 0;
}
