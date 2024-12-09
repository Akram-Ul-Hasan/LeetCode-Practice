class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r = matrix.size(), c = matrix[0].size();
        int left = 0, right = c - 1, top = 0, bottom = r - 1;

        while (left <= right && top <= bottom) {
            for (int i = left; i <= right && top <= bottom; i++ ) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom && left <= right; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            for (int i = right; i >= left && top <= bottom; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;

            for(int i = bottom; i >= top && left <= right; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};