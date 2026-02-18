class Solution {
public:
    int smallestNumber(int n) {
        bitset<16> b(n);

        int highestbit=15;
        while(highestbit>0 && b[highestbit]==0){
            highestbit--;
        }
        int count=0;
        for(int i=0;i<=highestbit;i++){
            if(b[i]==0){
                b[i]=1;
            }
            count++;
        }
        return (1 << count)-1; // 1 << count==== 2 ki power count
    }
};