class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int countA = 0;
        int countB = 0;

        for (int i = 0; i < aliceSizes.size(); i++) {
            countA += aliceSizes[i];
        }
        for (int i = 0; i < bobSizes.size(); i++) {
            countB += bobSizes[i];
        }

        int diff = (countB - countA) / 2;

        for (int i = 0; i < aliceSizes.size(); i++) {
            for (int j = 0; j < bobSizes.size(); j++) {
                if (bobSizes[j] == aliceSizes[i] + diff) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }

        return {};
    }
};