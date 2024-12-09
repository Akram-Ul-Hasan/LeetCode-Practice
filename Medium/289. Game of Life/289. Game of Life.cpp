class Solution {
public:
    void gameOfLife(vector<vector<int>>& matrix) {
        vector<vector<int>>dir{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

        int m = matrix.size(), n = matrix[0].size();

        for(int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;
                for(int k = 0; k < dir.size(); k++ ) {
                    int neiR = i + dir[k][0];
                    int neiC = j + dir[k][1];

                    if ( neiR < 0 || neiR >= m || neiC < 0 || neiC >= n) continue;
                    
                    if (matrix[neiR][neiC] == 1 || matrix[neiR][neiC] == 2) {
                        count++;
                    }
                }

                if(count < 2 && matrix[i][j] == 1) matrix[i][j] = 2;
                if(count > 3 && matrix[i][j] == 1) matrix[i][j] = 2;
                if(count == 3 && matrix[i][j] == 0) matrix[i][j] = 3;
            }
        }
        for(int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = matrix[i][j] % 2;
            }
        }
    }
};