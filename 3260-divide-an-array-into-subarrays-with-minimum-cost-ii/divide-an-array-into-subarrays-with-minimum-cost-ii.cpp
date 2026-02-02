class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        int need = k - 2;
        multiset<long long> small, large;
        long long sumSmall = 0;
        auto balance = [&]() {
            while ((int)small.size() > need) {
                auto it = prev(small.end());
                sumSmall -= *it;
                large.insert(*it);
                small.erase(it);
            }
            while ((int)small.size() < need && !large.empty()) {
                auto it = large.begin();
                sumSmall += *it;
                small.insert(*it);
                large.erase(it);
            }
            if (!small.empty() && !large.empty()) {
                while (*prev(small.end()) > *large.begin()) {
                    auto itSmall = prev(small.end());
                    auto itLarge = large.begin();
                    sumSmall -= *itSmall;
                    sumSmall += *itLarge;
                    long long a = *itSmall, b = *itLarge;
                    small.erase(itSmall);
                    large.erase(itLarge);
                    small.insert(b);
                    large.insert(a);
                }
            }
        };
        auto add = [&](long long x) {
            if (!small.empty() && x <= *prev(small.end())) {
                small.insert(x);
                sumSmall += x;
            } else {
                large.insert(x);
            }
            balance();
        };
        auto remove = [&](long long x) {
            auto it = small.find(x);
            if (it != small.end()) {
                sumSmall -= x;
                small.erase(it);
            } else {
                it = large.find(x);
                if (it != large.end()) large.erase(it);
            }
            balance();
        };
        long long ans = LLONG_MAX;
        int L = 1;
        int R = 1 + dist;
        for (int i = L + 1; i <= R; i++) {
            add(nums[i]);
        }
        for (int i1 = 1; i1 <= n - k + 1; i1++) {
            long long cost = nums[0] + nums[i1] + sumSmall;
            ans = min(ans, cost);
            if (i1 == n - k + 1) break;
            remove(nums[i1 + 1]);
            R++;
            if (R < n) add(nums[R]);
        }
        return ans;
    }
};