class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, int> m;
        int n = strs.size();
        for(int i = 0; i < n; i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            if(m.find(str) == m.end()) {
                m[str] = ans.size();
                ans.push_back({});
            } 
            ans[m[str]].push_back(strs[i]);
        }
        return ans;
    }
};