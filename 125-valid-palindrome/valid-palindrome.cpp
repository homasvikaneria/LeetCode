class Solution {
public:
    bool isPalindrome(string s) {
        string og="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                og+=tolower(s[i]);
            }
        }
        int i=0;int j=og.length()-1;
        while(i<j){
            if(og[i]!=og[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};