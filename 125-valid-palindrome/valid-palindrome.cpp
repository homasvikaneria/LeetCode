class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        int i=0;
        while(i<s.size()){
            if(isalnum(s[i])){
                filtered+=tolower(s[i]);
            }
            i++;
        }
        string reversed = filtered;
        reverse(reversed.begin(),reversed.end());
        return filtered==reversed;
    }
};