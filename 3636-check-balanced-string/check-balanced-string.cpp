class Solution {
public:
    bool isBalanced(string num) {
        int evenCnt=0;
        int oddCnt=0;
        for(int i=0;i<num.size();i=i+2){
            evenCnt+=num[i]-'0';
        }
        for(int i=1;i<num.size();i=i+2){
            oddCnt+=num[i]-'0';
        }
        if(evenCnt==oddCnt){
            return true;
        }
        
        return false;
    }
};