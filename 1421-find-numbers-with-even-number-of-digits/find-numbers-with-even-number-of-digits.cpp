class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_ctr=0;
     for(int num:nums){
        if(to_string(num).size()%2==0){
            even_ctr++;
        }
     }
     return even_ctr;
        
    }
};