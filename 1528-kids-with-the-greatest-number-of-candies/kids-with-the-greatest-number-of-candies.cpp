class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> check;
        // bool result=false;
        int max=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        cout<<max;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                check.push_back(true);
            }
            else{
                check.push_back(false);
            }
        }
        return check;
    }
};