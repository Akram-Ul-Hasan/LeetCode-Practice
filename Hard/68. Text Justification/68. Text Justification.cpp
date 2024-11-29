class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res, line_words;
        int len = 0;

        for (const auto& word : words) {
            if (len + word.length() + line_words.size() > maxWidth) {
                int total_space = maxWidth - len;
                int gap = line_words.size() - 1;
                if(gap == 0) {
                    res.push_back(line_words[0] + string(total_space, ' '));
                } else {
                    int space_per_gap = total_space / gap;
                    int extra_space = total_space % gap;
                    string line = "";

                    for (int i = 0; i < line_words.size(); i++) {
                        line += line_words[i];
                        if (i < gap) {
                            line += string(space_per_gap, ' ');
                            if (i < extra_space) {
                                line += ' ';
                            }
                        }
                    }
                    res.push_back(line);
                }
                line_words.clear();
                len = 0;
            }
            line_words.push_back(word);
            len += word.length();
        }
        string last_line = "";
        
        for (const auto& word : line_words) {
            if(!last_line.empty()) {
                last_line += ' ';
            }
            last_line += word;
        }
        last_line += string(maxWidth - last_line.length(), ' ');
        res.push_back(last_line);

        return res;
    }
};