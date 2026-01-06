class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;  
        int right = nums.size() - 1;  
        int minNum = INT_MAX;  
        
        while (left <= right) {
            int mid = left + (right - left) / 2; 
            
            // Check if the middle element is less than or equal to the right element
            if (nums[mid] <= nums[right]) {
                minNum = min(minNum, nums[mid]);  // Update minNum with the smallest value
                right = mid - 1;  // The minimum must be in the left part
            } else {
                minNum = min(minNum, nums[left]);  // Update minNum with the smallest value
                left = mid + 1;  // The minimum must be in the right part
            }
        }
        
        return minNum;  
    }
};
