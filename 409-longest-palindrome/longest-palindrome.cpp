class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int x:s){
            mp[x]++;
        }

        int total=0;
        bool oddExist=false;
        for(auto x:mp){
            if(x.second%2==0){
                total+=x.second;
            }
            else{
                total+=x.second - 1;
                oddExist=true;
            }
        }
        if(oddExist==true){
            total+=1;
        }
        return total;
    }
};