#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long solve(int n,int x,int m)
{
    if(n==1)
    {
        return x%m;
    }
    else
    {
    
         return ((2%m)*(solve(n-1,x,m)%m))%m;
        
    }
} 

long long pow2[1000001];

int main()
{
 
   int t;
   cin>>t;
   long long m=1e9+7;
   
   pow2[0]=1;
   for(int i=1;i<1000001;i++)
   {
       pow2[i]=(pow2[i-1]*2)%m;
   }
   while(t--)
   {
       int n,x;
       cin>>n>>x;
       cout<<(pow2[n-1]*x)%m<<endl;
       
      
   }
	return 0;

}