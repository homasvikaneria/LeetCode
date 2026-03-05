class Solution {
public:
    int minOperations(string s) {
        int changesPattern0 = 0; 
        int changesPattern1 = 0; 

 
        for(int i = 0; i < s.size(); i += 2){
            if(s[i] != '0') changesPattern0++;  
            if(s[i] != '1') changesPattern1++;  
        }

        for(int i = 1; i < s.size(); i += 2){
            if(s[i] != '1') changesPattern0++; 
            if(s[i] != '0') changesPattern1++; 
        }

        return min(changesPattern0, changesPattern1);
    }
};