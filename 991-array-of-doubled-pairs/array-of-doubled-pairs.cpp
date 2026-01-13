class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> count;
        
        // Count the occurrences of each element in the array
        for (int num : arr) {
            count[num]++;
        }
        
        // Sort the array by absolute value
        sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        
        // Try to find pairs for each element
        for (int num : arr) {
            if (count[num] > 0) {
                if (count[2 * num] > 0) {
                    count[num]--;
                    count[2 * num]--;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
