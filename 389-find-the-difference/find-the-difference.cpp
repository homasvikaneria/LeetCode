class Solution {
public:
    char findTheDifference(string s, string t) {
        int counts=0;
        int countt=0;
        for(int i=0;i<s.length();i++){
            counts+=s[i];
        }
        for(int i=0;i<t.length();i++){
            countt+=t[i];
        }

        return (char)(countt-counts);
    }
};