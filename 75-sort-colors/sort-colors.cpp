class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;int j=0;int k=nums.size()-1;
        while(j<=k){
            if(nums[j]==0){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i++;
                j++;
            }else if(nums[j]==1){
                j++;
            }else if(nums[j]==2){
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;
                k--;
            }
        }
    }
};