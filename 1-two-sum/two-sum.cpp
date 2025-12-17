class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);
        unordered_map<int,int> visitedElements;

        for(int i=0;i<nums.size();i++){
            int currElement=nums[i];
            int numToFind=target-currElement;

            if(visitedElements.count(numToFind)){
                index[0]=visitedElements[numToFind];
                index[1]=i;
                return index;
            }
            visitedElements[currElement]=i;
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int left=0;
//         int right=nums.size()-1;
//         int current_sum;
//         while(left<right){
//             current_sum = nums[left] + nums[right];
//             if(current_sum==target){
//                 return {left,right};
//             }
//             if(current_sum < target){
//                 left++;
//             }
//             if(current_sum > target){
//                 right--;
//             }
//         }
//         return {};
//     }
// };