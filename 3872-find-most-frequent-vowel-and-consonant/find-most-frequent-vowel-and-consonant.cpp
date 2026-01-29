class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vow;
        unordered_map<char,int>con;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vow[s[i]]++;
            }else{
                con[s[i]]++;
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