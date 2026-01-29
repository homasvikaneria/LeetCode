class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>ele;
        for(int x:sentence){
            ele.insert(x);
        }
        if(ele.size()<26){
            return false;
        }
        return true;
    }
};