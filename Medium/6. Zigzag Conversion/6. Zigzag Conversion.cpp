class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size() < numRows || numRows == 1) {
            return s;
        }
        vector< vector<char>> arr(numRows);
        int row = 0, d = 1;
        for (auto& c: s) {
            arr[row].push_back(c);
            if (row == 0) {
                d = 1;
            } else if (row == numRows - 1) {
                d = -1;
            }
            row += d;
        }
        string result = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                result += arr[i][j];
            }
        }
        return result;
    }
};