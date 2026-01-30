#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;  // single person is judge
        unordered_map<int, int> score;
        // Step 1: calculate scores
        for (int i = 0; i < trust.size(); i++) {
            int a = trust[i][0]; // person who trusts
            int b = trust[i][1]; // person who is trusted
            score[a]--;  // loses point because trusts someone
            score[b]++;  // gains point because is trusted
        }
        // Step 2: find judge
        for (int i = 1; i <= n; i++) {
            if (score[i] == n - 1) {
                return i;  // found the judge
            }
        }
        return -1; // no judge found
    }
};
