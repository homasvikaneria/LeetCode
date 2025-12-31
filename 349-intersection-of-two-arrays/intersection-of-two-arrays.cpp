class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        vector<int> common;

        for (int element : nums2) {
            if (set1.erase(element)) {
                common.push_back(element);
            }
        }
        return common;
    }
    
};
