class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> vals;
        for(auto x : mp) {
            vals.push_back(x.first);
        }

        sort(vals.begin(), vals.end());

        for(int i = 0; i < vals.size(); i++) {
            for(int j = i + 1; j < vals.size(); j++) {
                if(mp[vals[i]] != mp[vals[j]]) {
                    return {vals[i], vals[j]};
                }
            }
        }

        return {-1, -1};
    }
};