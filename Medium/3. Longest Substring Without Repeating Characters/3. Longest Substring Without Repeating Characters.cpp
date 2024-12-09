class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        unordered_set<char>myset;
        int left = 0, right = 0;

        while(right < s.length()) {
            myset.insert(s[right++]);
            maxLen = max(maxLen, right - left);
            while(left < s.length() && myset.find(s[right]) != myset.end()) {
                myset.erase(s[left++]);
            }
        }
        return maxLen;
    }
};