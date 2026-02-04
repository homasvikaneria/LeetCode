class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        vector<int> st; // used it like a stack

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.back()]) {
                int idx = st.back();
                st.pop_back();
                result[idx] = i - idx;
            }
            st.push_back(i);
        }

        return result;
    }

}
;
