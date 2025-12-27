class Solution {
public:
    void rotate(vector<int>& nums, int k) {        
        vector<int> newArray(nums.size()); 
        for(int i = 0; i < nums.size(); ++i) {
            int newIndex = (i + k) % nums.size();
            newArray[newIndex] = nums[i];
        }        
        for(int i = 0; i < nums.size(); ++i) {
            nums[i] = newArray[i];
        }
    }
};