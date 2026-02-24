class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int n = s.size();
        bool inside = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '|') {
                inside = !inside;
            } else if (s[i] == '*' && inside == false) {
                count++;
            }
        }
        return count;
    }
};