class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        unordered_map<int ,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1 && (k==1 || i==0 || i==n-1)){
                    ans=max(ans,nums[i]);
            }
        }
        return ans;
    }   
};