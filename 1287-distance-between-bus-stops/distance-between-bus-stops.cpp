class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) {
            swap(start, destination);
        }
        int clockwise = 0;
        for (int i = start; i < destination; i++) {
            clockwise += distance[i];
        }
        int total = accumulate(distance.begin(), distance.end(), 0);
        int counterClockwise = total - clockwise;

        return min(clockwise, counterClockwise);
    }
};