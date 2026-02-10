class Solution {
public:
    int numberOfMatches(int n) {
        int totalteam=n;
        int matches=0;
        int count=0;
        while(totalteam>1){
            if(totalteam%2==0){
                matches=totalteam/2;
                totalteam=totalteam/2;
            }else{
                matches=(totalteam-1)/2;
                totalteam=(totalteam-1)/2+1;
            }
            count+=matches;
        }
        return count;
    }
};