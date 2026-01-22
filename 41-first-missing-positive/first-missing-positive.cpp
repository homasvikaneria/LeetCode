class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());

        int firstMissing = 1;
        for (int x : st) {
            if (x == firstMissing)
                firstMissing++;
        }

        return firstMissing;
    }
};