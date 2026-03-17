class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> seen;
        for (char ch : s) {
            if (seen.find(ch) != seen.end()) {
                return ch;
            }
            seen.insert(ch);
        }
        return '\0'; 
    }
};