class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int currentsun=0;
            for(int j=i;j<arr.size();j++){
                currentsun += arr[j] ;
                int result=j-i+1;
                if(result%2==1){
                    sum+=currentsun;
                }
            }
        }
        return sum;
    }
};