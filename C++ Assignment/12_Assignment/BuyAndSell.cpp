#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

   if(prices.size() == 0) return 0;
        
        int ans = 0;
        
        int start = prices[0], end = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < start){
                //restart as session
                ans = max(ans, end - start);
                start = prices[i];
                end = prices[i];
            }else{
                //continue current session
                end = max(end, prices[i]);
            }
        }
        ans = max(ans, end - start);
        return ans;

}
