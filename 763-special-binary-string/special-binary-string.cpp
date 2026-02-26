class Solution {
public:
    string sol(string &s) {
        int n = s.size();
        vector<string> parts;
        string temp;
        int balance = 0, maxBalance = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                balance++;
                maxBalance = max(maxBalance, balance);
                temp += '1';
            } else {
                balance--;
                temp += '0';
            }

            // Found a complete special substring
            if (balance == 0) {
                // If substring is primitive (no inner nesting)
                if (maxBalance == temp.size() / 2) {
                    parts.push_back(temp);
                } 
                // Otherwise, recursively solve the inner substring
                else {
                    // Remove outer '1' and '0'
                    for (int j = 0; j < temp.size() - 2; j++) {
                        temp[j] = temp[j + 1];
                    }
                    parts.push_back("1" + sol(temp) + "0");
                }

                temp.clear();
                maxBalance = 0;
            }
        }

        // Sort to get lexicographically largest result
        sort(parts.begin(), parts.end(), greater<string>());

        string result;
        for (auto &p : parts) result += p;
        return result;
    }

    string makeLargestSpecial(string s) {
        return sol(s);
    }
};
