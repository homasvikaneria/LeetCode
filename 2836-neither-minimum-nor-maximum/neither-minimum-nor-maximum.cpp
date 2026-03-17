class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i:nums){
            if(i<min){
                min=i;
            }
            if(i>max){
                max=i;
            }
        }
        for(int i:nums){
            if(i!=max &&i!=min){
                return i;
            }
        }
        return -1;
    }
};