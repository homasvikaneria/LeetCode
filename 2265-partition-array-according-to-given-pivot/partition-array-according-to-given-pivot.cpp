class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> greater;
        vector<int> equal;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                smaller.push_back(nums[i]);
            } else if (nums[i] == pivot) {
                equal.push_back(nums[i]);
            } else {
                greater.push_back(nums[i]);
            }
        }

        vector<int> result;
        result.insert(result.end(), smaller.begin(), smaller.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());

        return result;
    }
};