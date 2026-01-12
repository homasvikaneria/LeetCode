class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];
        }
        for (string op : operations) {
            if(op=="--X" || op=="X--"){
                sum--;
            }else{
                sum++;
            }
        }
        return sum;
    }
};