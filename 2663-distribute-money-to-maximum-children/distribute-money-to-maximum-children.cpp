class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) return -1;  // everyone needs at least $1
        
        money -= children;  // give $1 to each child
        int count = 0;
        
        for (int i = 0; i < children; i++) {
            if (money >= 7) {
                money -= 7;
                count++;  // this child now has $8
            } else {
                if (i == children - 1 && money == 3 && count > 0)
                    count--;
                break;
            }
        }
                if (count == children && money > 0)
            count--;
        
        return count;
    }
};