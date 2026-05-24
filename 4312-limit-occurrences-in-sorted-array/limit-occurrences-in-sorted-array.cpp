class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int j = 0; // write pointer

        for (int num : nums) {
            // Keep first k elements
            // After that, only keep if current number
            // is different from the element k positions before
            if (j < k || nums[j - k] != num) {
                nums[j] = num;
                j++;
            }
        }

        // Resize to valid length
        nums.resize(j);
        return nums;
    }
};