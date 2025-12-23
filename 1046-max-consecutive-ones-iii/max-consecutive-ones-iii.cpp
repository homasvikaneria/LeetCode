class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0,countZeros=0,maxOnes=0;
        while(j<n){

            if(nums[j]==0){
                countZeros++;   
            }
            while(countZeros>k){
                if(nums[i]==0){
                    countZeros--;
                }
                i++;
            }

            maxOnes=max(maxOnes,j-i+1);
            j++;
        }
        return maxOnes;
    }
};

