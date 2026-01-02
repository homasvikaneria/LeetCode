class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }
};

// //binary search
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int index=0;
//         int start = 0;
//         int end = nums.size() - 1;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {
//                 index = mid;
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }

//         if(nums[index] < target) {
//             return index+1;
//         }

//         return index;
//     }
// };