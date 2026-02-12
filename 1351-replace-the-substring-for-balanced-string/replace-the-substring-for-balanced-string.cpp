class Solution {
public:
    int balancedString(string s) {
        int n = s.length();
        int target = n / 4;
        
        unordered_map<char,int> total;
        for(char c : s) {
            total[c]++;
        }
        
        int left = 0;
        int minLen = n;
        
        for(int right = 0; right < n; right++) {
            
            total[s[right]]--;  // include in window
            
            while(left < n &&
                  total['Q'] <= target &&
                  total['W'] <= target &&
                  total['E'] <= target &&
                  total['R'] <= target) {
                
                minLen = min(minLen, right - left + 1);
                
                total[s[left]]++;  // remove from window
                left++;
            }
        }
        
        return minLen;
    }
};
