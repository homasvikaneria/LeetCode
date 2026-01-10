class Solution {
public:
    string s1, s2;
    int n, m;
    vector<vector<int>> dp;
    vector<int> suf1, suf2;

    int solve(int i, int j) {
        if (dp[i][j] != -1)
            return dp[i][j];

        if (i == n)
            return dp[i][j] = suf2[j];

        if (j == m)
            return dp[i][j] = suf1[i];

        if (s1[i] == s2[j])
            return dp[i][j] = solve(i + 1, j + 1);

        int deleteS1 = s1[i] + solve(i + 1, j);
        int deleteS2 = s2[j] + solve(i, j + 1);

        return dp[i][j] = min(deleteS1, deleteS2);
    }

    int minimumDeleteSum(string a, string b) {
        s1 = a;
        s2 = b;
        n = s1.size();
        m = s2.size();

        dp.assign(n + 1, vector<int>(m + 1, -1));
        suf1.assign(n + 1, 0);
        suf2.assign(m + 1, 0);

        for (int i = n - 1; i >= 0; i--)
            suf1[i] = suf1[i + 1] + s1[i];

        for (int j = m - 1; j >= 0; j--)
            suf2[j] = suf2[j + 1] + s2[j];

        return solve(0, 0);
    }
};