class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = s.length() - 1;

        //  Reverse the entire string (this reverses the words and their order)
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }

        //  Reverse each word back to its original letter order
        i = 0;
        while (i < s.length()) {
            // Skip spaces
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            
            int start = i;  // The start of the word
            
            // Find the end of the word
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            
            int wordStart = start;
            int wordEnd = i - 1;  // The end of the word
            
            // Reverse the word using two pointers
            while (wordStart < wordEnd) {
                swap(s[wordStart], s[wordEnd]);
                wordStart++;
                wordEnd--;
            }
        }

        // Remove extra spaces (trim spaces and reduce multiple spaces between words)
        int index = 0;
        int n = s.length();

        // Remove leading spaces
        while (index < n && s[index] == ' ') {
            index++;
        }

        // Remove extra spaces between words
        string result = "";
        while (index < n) {
            // Skip multiple spaces
            if (s[index] != ' ' || (index + 1 < n && s[index + 1] != ' ')) {
                result += s[index];
            }
            index++;
        }

        // Remove trailing space
        if (!result.empty() && result[result.size() - 1] == ' ') {
            result.pop_back();
        }

        return result;
    }
};
