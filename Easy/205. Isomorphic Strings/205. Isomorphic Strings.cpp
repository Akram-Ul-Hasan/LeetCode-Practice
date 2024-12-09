class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>m(256, -1);
        vector<int>n(256, -1);
        for(int i = 0; i < s.length(); i++) {
            if(m[s[i]] != n[t[i]]) {
                return false;
            }
            m[s[i]] = i;
            n[t[i]] = i;
        }
        return true;
    }
};