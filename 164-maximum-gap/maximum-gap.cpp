class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int gap=0;
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
        // for(int i=0;i<nums.size()-1;i++){
            // if(nums[i+1]-nums[i]>gap){
            //     gap=nums[i+1]-nums[i];
            // }
            gap = max(gap, nums[i] - nums[i - 1]);

        }
        return gap;

    }
};