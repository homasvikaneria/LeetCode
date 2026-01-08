class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int element;
        int missingCount = 0;
        int j = 0;
        for (int i = 1; missingCount < k; i++) {
            if (j<arr.size() && arr[j]==i ) { 
                j++;            
            } else {
                missingCount++; 
                element = i;   
            }
        }
        return element;
    }
};
