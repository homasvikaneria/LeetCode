class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int >>v;
        for(int i=0;i<n;i++){
            int count=0;
            for(int b=0;b<15;b++){
                if(arr[i]&(1<<b)){
                    count++;
                }
            }
            v.push_back({count,arr[i]});
        }

        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i][1]);
        }
        return ans;
    }
};