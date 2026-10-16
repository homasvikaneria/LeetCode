class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int>rank;
        int currRank=1;
        for(int num:sorted){
            if(!rank.count(num)){
                rank[num]=currRank++;
            }
        }
        for(int i=0;i<arr.size();i++ ){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};