class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int minswaps = -1;
        int xy = 0;
        int yx = 0;
        unordered_map<char, int> mp;

        for (char c : s1)
            mp[c]++;
        for (char c : s2)
            mp[c]++;
        for (auto& p : mp) {
            if (p.second % 2 != 0)
                return -1;
        }
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == 'x' && s2[i] == 'y') {
                xy++;
            }
            if (s1[i] == 'y' && s2[i] == 'x') {
                yx++;
            }
        }
        int swaps = xy / 2 + yx / 2 + (xy % 2) * 2;
        return swaps;
    }
};