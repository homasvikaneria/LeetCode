class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vow;
        unordered_map<char,int>con;
        for(char i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                vow[i]++;
            }else{
                con[i]++;
            }
        }
        int maxVow=0;
        int maxCon=0;
        for(auto x:vow){
            if(x.second>maxVow){
                maxVow=x.second;
            }
        }
        for(auto x:con){
            if(x.second>maxCon){
                maxCon=x.second;
            }
        }
        return maxVow+maxCon;
    }
};