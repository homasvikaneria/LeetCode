class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums[i]=0;
                nums[i-1]=2*nums[i-1];
            }
        }
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
            }
            j++;
        }
        return nums;
    }
};