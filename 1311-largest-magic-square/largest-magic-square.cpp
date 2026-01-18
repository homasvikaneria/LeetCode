class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 1;

        for (int k = 2; k <= min(m, n); k++) {           // size
            for (int i = 0; i + k <= m; i++) {           // row start
                for (int j = 0; j + k <= n; j++) {       // col start
                    
                    int sum = 0;
                    for (int x = 0; x < k; x++)
                        sum += grid[i][j + x];          // first row sum
                    
                    bool ok = true;

                    // rows
                    for (int r = i; r < i + k; r++) {
                        int s = 0;
                        for (int c = j; c < j + k; c++)
                            s += grid[r][c];
                        if (s != sum) ok = false;
                    }

                    // columns
                    for (int c = j; c < j + k && ok; c++) {
                        int s = 0;
                        for (int r = i; r < i + k; r++)
                            s += grid[r][c];
                        if (s != sum) ok = false;
                    }

                    // diagonals
                    int d1 = 0, d2 = 0;
                    for (int t = 0; t < k; t++) {
                        d1 += grid[i + t][j + t];
                        d2 += grid[i + t][j + k - 1 - t];
                    }

                    if (ok && d1 == sum && d2 == sum)
                        ans = max(ans, k);
                }
            }
        }

        return ans;
    }
};
