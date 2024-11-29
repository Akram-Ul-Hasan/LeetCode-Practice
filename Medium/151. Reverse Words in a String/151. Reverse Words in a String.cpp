class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() - 1;
        int l = 0, r = n;
        while(s[l] == ' ') {
            l++;
        }
        while(s[r] == ' ') {
            r--;
        }

        vector<string> words;
        string word = "";

        for (; l <= r; l++ ) {
            if(s[l] != ' ') {
                word += s[l];
            } else {
                if (word != ""){
                    words.push_back(word);
                }
                word = "";
            }
        }

        if (word != ""){
            words.push_back(word);
        }

        string answer;
        for (int i = words.size() - 1; i >= 0 ; i--) {
            answer += words[i];
            if (i != 0) {
                answer += " ";
            }
        }
        return answer;
    }
};