class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalbottle=0;
        int empty=0;
        while(numBottles>0){
                totalbottle+=numBottles;
                empty+=numBottles;
            
                numBottles=empty/numExchange;
                empty=empty%numExchange;
        }
        return totalbottle;
    }
};