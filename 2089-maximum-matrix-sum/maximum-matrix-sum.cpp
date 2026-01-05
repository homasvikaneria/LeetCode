class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long maxSum = 0;
        int minvalue = INT_MAX;
        int countNeg = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int value = matrix[i][j];
                if (value < 0) {
                    countNeg++;
                }
                if (abs(value) < minvalue) {
                    minvalue = abs(value);
                }
                maxSum += abs(value);
            }
        }
        if(countNeg %2==0){
            return maxSum;
        }else{
            return maxSum = maxSum - 2*minvalue;
        }
    }
};
