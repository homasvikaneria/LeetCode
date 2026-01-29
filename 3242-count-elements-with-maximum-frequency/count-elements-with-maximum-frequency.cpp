class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        int count=0;
        int maxfreq=0;
        for(auto x:freq){

            if(x.second>maxfreq){
                maxfreq=x.second;
                count=0;
            }
            if(x.second==maxfreq){
                count++;
            }
            
        }
        return count*maxfreq;
    }
};