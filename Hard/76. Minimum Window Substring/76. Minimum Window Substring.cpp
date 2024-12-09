class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        vector<int>map(128, 0);
        for (auto& c : t) {
            map[c]++;
        }

        int count = t.length();
        int left = 0, right = 0, minLen = INT_MAX, startIndex = 0;

        while (right < s.length()) {
            if(map[s[right++]]-- > 0) {
                count--;
            }

            while(count == 0) {
                if (right - left < minLen) {
                    startIndex = left;
                    minLen = right - left;
                }

                if (map[s[left++]]++ == 0) {
                    count++;
                }
            }
        }
        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};
