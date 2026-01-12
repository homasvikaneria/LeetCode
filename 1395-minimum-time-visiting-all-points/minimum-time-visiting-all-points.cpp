class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;

        for (int i = 1; i < points.size(); i++) {
            int x = points[i-1][0];
            int y = points[i-1][1];
            int targetX = points[i][0];
            int targetY = points[i][1];

            // Move step by step until we reach the target point
            while (x != targetX || y != targetY) {
                if (x < targetX) x++;
                else if (x > targetX) x--;

                if (y < targetY) y++;
                else if (y > targetY) y--;

                time++; // 1 second per step
            }
        }

        return time;
    }
};
