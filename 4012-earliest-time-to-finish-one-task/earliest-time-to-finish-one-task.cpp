class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;
        for(int i=0;i<tasks.size();i++){
            int temp = 0;
            for(int j=0;j<tasks[i].size();j++){
                temp+=tasks[i][j];
            }
            mini = min(mini,temp);
        }
        return mini;
    }
};