class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(auto x:intervals){
            if(ans.empty()){
                ans.push_back(x);
            }
            else{
                int last=ans.back()[1];
                int first=x[0];
                if(last>=first){
                    ans.back()[1]=max(ans.back()[1],x[1]);
                }else{
                ans.push_back(x);

                }
            }
        }
        return ans;

    }
};