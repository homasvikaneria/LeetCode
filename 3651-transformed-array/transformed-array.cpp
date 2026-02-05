class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            int landing_index=(nums[i]+i)%n;
            if(landing_index<0){
                landing_index+=n;
            }
            result[i]=nums[landing_index];
        }
        return result;
    }
};
