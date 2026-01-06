class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // If the array has only one element, return it directly
        if (nums.size() == 1) {
            return nums[0];
        }
        
        // Iterate through the array, excluding the first and last elements
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        // Handle the first element (if it's unique)
        if (nums[0] != nums[1]) {
            return nums[0];
        }

        // Handle the last element (if it's unique)
        if (nums[nums.size() - 1] != nums[nums.size() - 2]) {
            return nums[nums.size() - 1];
        }

        return -1; // In case there's no unique element (shouldn't happen in this case)
    }
};
