class Solution {
public:
    bool checkRecord(string s) {
        int totalAbsent=0;
        int continuousLate=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                totalAbsent++;
                continuousLate=0;
                if(totalAbsent==2){
                    return false;
                    break;
                }
            }
            else if(s[i]=='L'){
                continuousLate++;
                if(continuousLate>=3)return false;
            }
            else{
                continuousLate=0;
            }
        }
        return true;
    }
};