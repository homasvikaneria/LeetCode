class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int words = 1; // at least one word
            for (char c : s) {
                if (c == ' ')
                    words++;
            }
            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};
