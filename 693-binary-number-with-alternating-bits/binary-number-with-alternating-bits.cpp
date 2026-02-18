class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==0){
            return true;
        }

        bitset<32> b(n);

        int highestbit=31;
        while(highestbit>0 && b[highestbit]==0){
            highestbit--;
        }

        for(int i=0;i<highestbit;i++){
            if(b[i]==b[i+1]){
                return false;
            }
        }
        return true;
    }
};