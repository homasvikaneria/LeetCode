class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countOne=0;
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                countOne++;
                if(maxCount<countOne){
                    maxCount=countOne;
                }
            }
            else{
                countOne=0;
            }
        }
        return maxCount;
    }
};

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int max1=0;
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 count++;
//             }
//             else
//                 count=0;
//             max1 = max(max1, count);
//         }
//         return max1;     
//     }
// };