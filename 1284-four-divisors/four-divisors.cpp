class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int divisorCount = 0;
            int divisorSum = 0;

            for (int j = 1; j <= num; j++) {
                if (num % j == 0) {
                    divisorCount++;
                    divisorSum += j;
                }
                if (divisorCount > 4) {
                    break;
                }
            }
            if (divisorCount == 4) {
                totalSum += divisorSum;
            }
        }
        return totalSum;
        
    }
};