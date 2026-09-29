class Solution {
public:
    int minimumChairs(string s) {
        int chair=0;
        int maxChair=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                chair++;
                maxChair=max(maxChair,chair);
            }else{
                chair--;
            }
        }
        return maxChair;
    }
};