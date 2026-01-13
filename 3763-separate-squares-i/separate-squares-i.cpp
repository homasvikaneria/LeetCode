class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 0.0, high = 1e9;

        // Binary search for the separating Y
        for (int iter = 0; iter < 100; iter++) {
            double mid = (low + high) / 2.0;
            double above = 0.0, below = 0.0;

            for (auto &sq : squares) {
                double y = sq[1];
                double side = sq[2];
                double top = y + side;
                double area = side * side;

                if (top <= mid) {
                    // fully below
                    below += area;
                } else if (y >= mid) {
                    // fully above
                    above += area;
                } else {
                    // split by the line
                    double belowHeight = mid - y;
                    double aboveHeight = top - mid;
                    below += belowHeight * side;
                    above += aboveHeight * side;
                }
            }

            if (below < above)
                low = mid;
            else
                high = mid;
        }

        return (low + high) / 2.0;
    }
};
