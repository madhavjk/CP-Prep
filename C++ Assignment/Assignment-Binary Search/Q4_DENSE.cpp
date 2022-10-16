#include <bits/stdc++.h>
#define ll long long
using namespace std;
     void solve(){
          ll x;
         cin>>x;
         string s;
         cin>>s;
         ll m=0;
         ll n=x-1;
         ll min=0;
         while(m<=n){
             if(s[m]=='(' && s[n]==')'){
             m++;
             n--;
             }
            else if(s[m]=='(' && s[n]=='('){
             min++;
             n--;
            }
           else if(s[m]==')' && s[n]==')'){
               min++;
               m++;
           }
           else{
               min+=2;
               m++;
               n--;
           }
         }
         cout<<min<<endl;
      }
      int main(){
          ll t;
          cin>>t;
          while(t--){
           solve();
          }
      }