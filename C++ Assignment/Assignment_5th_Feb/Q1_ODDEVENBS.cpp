//Create your code file and add
//Q1
//Registration/CPRSS1109
//Madhav Sharma


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int freq=0;
	   
	    
	    for(int i=0; i<n; i++){
	        int b;
	        cin>>b;
	        if(b==0){
	            freq++;
	            
	        }
	    }
	    if(freq%2==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	    
	}
	
	
	return 0;
}
