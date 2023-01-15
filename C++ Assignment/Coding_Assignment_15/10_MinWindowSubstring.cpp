class Solution {
public:
    string minWindow(string s, string t) {
    
        unordered_map<char,int> mp;
        for(char c : t) {
            mp[c]++;
        }

        int begin=0,end=0;
        int minlen=INT_MAX;
        int count=t.size(),start=0;

        while(end<s.length()){
            if(mp[s[end]]-->0) count--;
            end++;

            while(count==0){
                if(minlen>end-begin){
                    minlen=end-begin;
                    start=begin;
                }
                if(++mp[s[begin]]>0) count++;
                begin++;
            }
        }
        if(minlen!=INT_MAX)
            return s.substr(start,minlen);
        return "";

         
        


    }
};
