class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())
            return false;
        unordered_map< char, int>m;
        for (auto& ch: s) {
            m[ch]++;
        }
        for(int i = 0; i < t.length(); i++) {
            if (m[t[i]] == 0) {
                return false;
            }
            m[t[i]]--;
        }
        return true;
    }
};