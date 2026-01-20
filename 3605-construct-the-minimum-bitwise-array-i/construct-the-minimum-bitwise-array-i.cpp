class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();

        for(int i=0;i<n;i++){
            bool value=false;
            for(int x=0;x<nums[i];x++){
                if((x|x+1)==nums[i]){
                    value=true;
                    ans.push_back(x);
                    break;
                }
            }
            if(!value){
                ans.push_back(-1);
            }else{
                value=false;
            }
        }
        return ans;
    }
};