class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0;int b=sqrt(c);
        while(a<=b){
            long long sum=a*a+b*b;
            if(sum==c){
                return true;
            }else if(sum!=c && sum<c){
                a++;
            }else {
                b--;
            }  
        }
    return false;
    }
};