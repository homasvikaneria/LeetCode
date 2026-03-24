class Solution {
public:
    void halfrotate(vector<int>&nums, int st,int end){
        while(st<end){
            int temp=nums[st];
            nums[st]=nums[end];
            nums[end]=temp;
            end--;
            st++;
        }  
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k % n;
        halfrotate(nums,0,n-1);
        halfrotate(nums,0,k-1);
        halfrotate(nums,k,n-1);
    }
};