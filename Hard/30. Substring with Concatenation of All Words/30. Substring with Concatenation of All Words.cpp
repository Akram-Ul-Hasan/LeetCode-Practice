class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> count;
        for (auto& word : words) {
            count[word]++;
        }
        int m = s.size(), n = words.size(), k = words[0].length();
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            unordered_map<string, int> cnt1;
            int l = i, r = i;
            int t = 0;
            while (r + k <= m) {
                string str = s.substr(r, k);
                r += k;
                if (!count.count(str)) {
                    cnt1.clear();
                    l = r;
                    t = 0;
                    continue;
                }
                cnt1[str]++;
                t++;
                while (cnt1[str] > count[str]) {
                    string remove = s.substr(l, k);
                    l += k;
                    cnt1[remove]--;
                    t--;
                }
                if (t == n) {
                    ans.push_back(l);
                }
            }
        }
        return ans;
    }
};