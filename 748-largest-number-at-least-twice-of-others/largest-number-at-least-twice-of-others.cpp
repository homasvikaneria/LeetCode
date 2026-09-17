class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int firstmax=INT_MIN;
        int secondmax=INT_MIN;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>firstmax){
                secondmax=firstmax;
                firstmax=nums[i];
                index=i;
            }
            else if(nums[i]>secondmax && nums[i]!=firstmax){
                secondmax=nums[i];
                
            }
        }
        if(firstmax>=secondmax*2){
            return index;
        }
        return -1;

    }
};