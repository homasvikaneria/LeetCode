class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {   
            int sqsum = 0;
            
            while (n > 0) {
                int digit = n % 10;
                sqsum += digit * digit;
                n /= 10;
            }
            
            n = sqsum; 
        }
        
        return n == 1;
    }
};