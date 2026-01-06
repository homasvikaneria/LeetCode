class Solution {
public:
    int findMin(vector<int>& nums) {
        int minNum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minNum){
                minNum=nums[i];
            }
        }
        return minNum;
    }
};