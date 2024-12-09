class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>rows[9];
        unordered_set<char>cols[9];
        unordered_set<char>boxes[9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] != '.') {
                    char ch = board[r][c];
                    int boxIndex = (r/3)*3 + (c/3);

                    if(rows[r].count(ch) || cols[c].count(ch) || boxes[boxIndex].count(ch)) {
                        return false;
                    }

                    rows[r].insert(ch);
                    cols[c].insert(ch);
                    boxes[boxIndex].insert(ch);
                }
            }
        }
        return true;
    }
};