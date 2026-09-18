class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>ans;

        for(int i=0;i<k;i++){
            int l=INT_MIN;
            int element=0;
            for(auto x:freq){
                if(x.second>l){
                    l=x.second;
                    element=x.first;
                }
            }
            ans.push_back(element);
            freq.erase(element);
        }
    return ans;
    }
};