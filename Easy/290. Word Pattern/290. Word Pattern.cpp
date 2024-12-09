class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss >> word) {
            words.push_back(word);
        }

        if(pattern.length() != words.size()) {
            return false;
        }

        unordered_map<string, char>ms;
        unordered_map<char, string>mp;
        for (int i = 0; i < words.size(); i++) {
            if(ms.find(words[i]) != ms.end() && ms[words[i]] != pattern[i]) {
                return false;
            }
            if(mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != words[i]) {
                return false;
            }
            mp[pattern[i]] = words[i];
            ms[words[i]] = pattern[i];
        }
        return true;
    }
};