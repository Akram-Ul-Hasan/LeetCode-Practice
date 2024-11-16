class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1;
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        int flag = i;
        while(i >= 0 && s[i] != ' ') {
            i--;
        }
        return flag - i;
    }
};