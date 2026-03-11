class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int count=0,result=0;
        while(n){
            int rem=n%2;
            result+=pow(2,count)*(!rem);
            n=n/2;
            count++;
        }
        return result;
    }
};