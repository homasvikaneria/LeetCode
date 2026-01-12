// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         for(int i=1;i<nums.size();i++){
//             nums[i]+=nums[i-1]; 
//         }
//         return nums;
//     }
// };

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixarr(n);
        prefixarr[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixarr[i]=prefixarr[i-1]+nums[i];
        }
        return prefixarr;
        
    }
    
};