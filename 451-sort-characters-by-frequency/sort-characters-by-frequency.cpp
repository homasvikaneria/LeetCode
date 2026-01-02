class Solution {
public:
    string frequencySort(string s) {

        // Step 1: Har character ki frequency count kar rahe hain
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Step 2: Buckets bana rahe hain
        // bucket[i] me woh saare characters jayenge
        // jo i times appear hote hain
        vector<vector<char>> bucket(s.length() + 1);

        for (auto i : mp) {
            // Yahan hum character ko uss bucket me daal rahe hain
            // jahan bucket ka index uski frequency ko represent karta hai
            // Example: bucket[2] ka matlab hai woh characters
            // jinki frequency 2 hai, isliye i.first ko bucket[i.second] me daal
            // rahe hain
            bucket[i.second].push_back(i.first);
        }

        // Step 3: Result string banana
        // high frequency se low frequency ki taraf jaa rahe hain
        string temp = "";
        for (int i = s.length(); i > 0; i--) {
            for (char c : bucket[i]) {
                // har character ko uski frequency ke barabar repeat kar rahe
                // hain
                temp.append(i, c);
            }
        }

        return temp;
    }
};
