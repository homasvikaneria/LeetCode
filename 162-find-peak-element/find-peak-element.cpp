class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        int low=1; //will not check 1st as we already did
        int high=nums.size()-2; //not chheck the last as we already did

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]>nums[mid-1]  && nums[mid] > nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]) {
                low=mid+1; 
            }
            else{
                high=mid-1;
            }
        }
        return nums[low];

    }
};



// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int peak=INT_MIN;
//         int index=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>peak){
//                 peak=nums[i];
//                 index=i;
//             }
//         }
//         return index;
//     }
// };