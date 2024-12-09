class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>map;

        for (auto &ch: ransomNote) {
            map[ch]++;
        }
        int count = ransomNote.size();
        for (int i = 0; i < magazine.size() && count > 0; i++) {
            if (map[magazine[i]] > 0) {
                count--;
                map[magazine[i]]--;
            }
        }

        return count == 0? true : false;
    }
};