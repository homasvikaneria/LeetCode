class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;
        unordered_set<int>st;
        int minNum=INT_MAX;
        int maxNum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            if(nums[i]<minNum){
                minNum=nums[i];
            }if(nums[i]>maxNum){
                maxNum=nums[i];
            }
        }
        for(int i=minNum;i<=maxNum;i++){
            if(st.find(i)==st.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};