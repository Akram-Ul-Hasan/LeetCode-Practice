class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int maxLen = 0;

        for( auto& num: s) {
            if(s.find(num-1) == s.end()) {
                int current = num+1;
                int len = 1;
                while(s.find(current) != s.end()) {
                    current++;
                    len++;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};