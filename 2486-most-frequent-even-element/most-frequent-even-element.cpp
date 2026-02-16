class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            if (x % 2 == 0) {
                freq[x]++;
            }
        }
        int count = 0;
        int ans=-1;
        for (auto f : freq) {
            if (f.second > count) {
                count = f.second;
                ans=f.first;
            }else if(f.second==count){
                ans=min(ans,f.first);
            }
        }
        return ans;
    }
    

};