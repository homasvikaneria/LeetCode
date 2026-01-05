class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 65 && word[i] <= 90) {
                count++;
            }
        }

        if (count == word.length()) {
            return true;
        }
        if (count == 0) {
            return true;
        }

        if (count == 1 && word[0] >= 65 && word[0] <= 90) {
            return true;
        }
        return false;
    }
};