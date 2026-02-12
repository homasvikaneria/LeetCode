class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size(); 
        int ans = 0;
        int cnt = 0;

        for(int i=0; i<n; i++) {
            unordered_map<char, int> mp;
            for(int j=i; j<n; j++) {
                mp[s[j]]++;
                cnt = 1;
                for(auto k : mp) {
                    if(k.second != mp[s[j]]) {
                         cnt = 0; 
                         break; 
                    } 
                }

                if(cnt == 1){
                    ans = max(ans, j-i+1);
                } 
            }
        }
        return ans;
    }
};