class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> nums;
        for(int x : arr){
            nums.push_back(x);
            if(x == 0){
                nums.push_back(0);
            }
        }
        for(int i = 0 ;i<arr.size();i++){
            arr[i] = nums[i];
        }
    }
};