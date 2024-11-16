class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size() - 1];
        int i = 0;
        while(i < first.size() && i < last.size()) {
            if(first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
            i++;
        }
        return ans;
    }
};