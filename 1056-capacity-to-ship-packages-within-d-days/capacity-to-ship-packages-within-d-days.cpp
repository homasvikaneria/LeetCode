class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
            int highestWt=weights[0];
            int total=0;
            for(int i=0;i<weights.size();i++){
                highestWt=max(weights[i],highestWt);
                total+=weights[i];
            }

            int left=highestWt;
            int right=total;

            while(left<=right){
                int mid=left+(right-left)/2;
                int currWt=0;
                int reqDays=1;

                for(int weight:weights){
                    if(currWt+weight>mid){
                        reqDays++;
                        currWt=0;
                    }
                    currWt+=weight;
                }
                if(reqDays<=days){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            return left;
    }
};