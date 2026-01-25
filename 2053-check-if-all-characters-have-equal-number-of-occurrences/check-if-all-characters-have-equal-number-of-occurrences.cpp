class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }
        int count = freq[s[0]];
        for (auto x : freq) {
            if (x.second != count) {
                return false;
            }
        }
        return true;
    }
};