class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>result(num_people,0);
        int i=0;
        while(candies>0){
            int give=min(candies,i+1);
            result[i%num_people]+=give;;
            candies-=give;
            i++;
        }
        return result;
    }
};