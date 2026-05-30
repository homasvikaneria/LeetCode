class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        char digit = x + '0';

        if (s[0] == digit) return false;   // starts with x

        for (char c : s) {
            if (c == digit) return true;   // contains x
        }

        return false;
    }
};