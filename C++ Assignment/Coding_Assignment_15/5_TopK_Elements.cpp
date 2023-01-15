class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
           unordered_map<int, int> mp;
           vector<int> v;

           for(int i=0; i<nums.size(); i++){

               mp[nums[i]]++;
           }

          for(auto x: mp){

              v.add(x.second);
          }
     
        sort(v.begin(), v.end());
        for(int j=0; j<k; i++){
            
        }
      
      return v;
    }
};
