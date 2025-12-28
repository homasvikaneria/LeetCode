class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int n = nums.size();
        for(int x : nums){
            freq[x]++;
        }
        for(auto x : freq){
            if(x.second > n/2){
                return x.first;
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count=0;
//         int candidate;
//         for(int i: nums){
//             if(count==0){
//                 candidate=i;
//             }
//             if(i==candidate){
//                 count++;
//             }else{
//                 count--;
//             }
//         }
//         return candidate;
        
//     }
// };