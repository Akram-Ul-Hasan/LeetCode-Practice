class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int answer = 0;
        for (int i = 0; i < s.size(); i++) {
            if(i+1 < s.size() && m[s[i]] < m[s[i+1]]) {
                answer -= m[s[i]];
            } else {
                answer += m[s[i]];
            }
        }
        return answer;
    }
};