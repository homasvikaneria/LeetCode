// //simple loop
// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         string result = "";
//         int maxLen = max(word1.length(), word2.length());

//         for (int i = 0; i < maxLen; i++) {
//             if (i < word1.length())
//                 result += word1[i];
//             if (i < word2.length())
//                 result += word2[i];
//         }
//         return result;
//     }
// };

//two pointer
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            result += word1[i++];
            result += word2[j++];
        }

        while (i < word1.length())
            result += word1[i++];

        while (j < word2.length())
            result += word2[j++];

        return result;
    }
};
