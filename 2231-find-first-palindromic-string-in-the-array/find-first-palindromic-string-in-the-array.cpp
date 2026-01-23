class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            string ans = "";
            int l = 0;
            int r = words[i].size() - 1;
            bool isPal = true;
            while (l < r) {
                if (words[i][r] == words[i][l]) {
                    l++;
                    r--;
                } else {
                    isPal = false;
                    break;
                }
            }
            if (isPal==true) {
                ans = words[i];
                return ans;
            }
        }
        return "";
    }
};