//1
//Registration/CPRSS1109
//Madhav Sharma

unordered_map<char, string> L({{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int len = digits.size();
        vector<string> ans;
        if (!len) return ans;
        bfs(0, len, "", ans, digits);
        return ans;
    }

    void bfs(int pos, int &len, string str, vector<string> &ans, string &D) {
        if (pos == len) ans.push_back(str);
        else {
            string letters = L[D[pos]];
            for (int i = 0; i < letters.size(); i++)
                bfs(pos+1, len, str+letters[i], ans, D);
        }
    }
};
