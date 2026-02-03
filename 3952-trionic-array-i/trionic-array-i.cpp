class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size()<4){
            return false;
        }
        int q=-1,p=-1,count=0;

        if(nums[0]>=nums[1]){
            return false;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])return false;
            if(nums[i]<nums[i-1]){
                p=i;
                count++;
                break;
            }
        }
        if(count!=1){
            return false;
        }
        for(int i=p+1;i<nums.size();i++){
            if(nums[i]==nums[i-1])return false;
            if(nums[i]>nums[i-1]){
                q=i;
                count++;
                break;
                }
            }
        
        if(count!=2){
            return false;
        }
        for(int i=q+1;i<nums.size();i++){
            if(nums[i]==nums[i-1])return false;
            if(nums[i]<=nums[i-1]){
                return false;
            }
        }
        
        return true;
    }
};