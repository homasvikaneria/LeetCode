class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), i = 0, j = 0, countZeros = 0, maxOnes = 0;
        
        while (j < n) {
            // If we encounter a zero, increase the zero count
            if (nums[j] == 0) {
                countZeros++;
            }
            
            // If countZeros exceeds k, shrink the window from the left
            while (countZeros > k) {
                if (nums[i] == 0) {
                    countZeros--;
                }
                i++;
            }

            // Update the max length of valid subarray
            maxOnes = max(maxOnes, j - i + 1);

            // Expand the window by moving j
            j++;
        }

        return maxOnes;
    }
};
