class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<bool> rowFlag(rows, false);
        vector<bool> colFlag(cols, false);

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowFlag[i] = true;
                    colFlag[j] = true;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < cols; j++) {
                if (rowFlag[i] == true || colFlag[j] == true) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};