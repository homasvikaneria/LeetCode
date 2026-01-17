class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<max){
                count=count+(max-nums[i]);
            }
        }
        return count;
    }
};