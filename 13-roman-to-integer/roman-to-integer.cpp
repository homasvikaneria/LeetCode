class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {{'I', 1},   {'V', 5},   {'X', 10},{'L', 50},  {'C', 100}, {'D', 500},{'M', 1000}};
        int currentvalue;
        int nextvalue;
        int count=0;
       
        for(int i=0;i<s.length();i++){
            currentvalue=mp[s[i]];
            nextvalue=mp[s[i+1]];

            if(currentvalue<nextvalue){
               int temp=nextvalue-currentvalue;
                count+=temp;
                i++;
            }
            else{
                count+=mp[s[i]];}
        }
        return count;
    }
};