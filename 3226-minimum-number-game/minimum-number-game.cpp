class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2) {
            ans.push_back(nums[i + 1]);
            ans.push_back(nums[i]);
        }

        return ans;
    }
};


// class Solution {
// public:
//     vector<int> numberGame(vector<int>& nums) {
//         vector<int> arr;

//         while (!nums.empty()) {
//             int smallest = INT_MAX;
//             int secondSmallest = INT_MAX;
//             int idx1 = -1, idx2 = -1;

//             // 1. Find smallest and second smallest
//             for (int i = 0; i < nums.size(); i++) {
//                 if (nums[i] < smallest) {
//                     secondSmallest = smallest;
//                     idx2 = idx1;

//                     smallest = nums[i];
//                     idx1 = i;
//                 }
//                 else if (nums[i] < secondSmallest) {
//                     secondSmallest = nums[i];
//                     idx2 = i;
//                 }
//             }

//             // 2. Add to result
//             arr.push_back(secondSmallest);
//             arr.push_back(smallest);

//             // 3. Remove elements (remove larger index first!)
//             if (idx1 > idx2) {
//                 nums.erase(nums.begin() + idx1);
//                 nums.erase(nums.begin() + idx2);
//             } else {
//                 nums.erase(nums.begin() + idx2);
//                 nums.erase(nums.begin() + idx1);
//             }
//         }

//         return arr;
//     }
// };
