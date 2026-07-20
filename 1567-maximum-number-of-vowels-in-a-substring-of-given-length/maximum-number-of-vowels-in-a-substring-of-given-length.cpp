class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int j = 0;
        int windowsum = 0;
        for (int i = 0; i < k; i++) {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||
            s[i] == 'O' || s[i] == 'U') {
                count++;
            }
        }
        windowsum=count;

        for(int i=k;i<s.length();i++){
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||
            s[i] == 'O' || s[i] == 'U') {
                windowsum++;
            }
            if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||
            s[j] == 'O' || s[j] == 'U') {
                windowsum--;
            }
            j++;
            count=max(windowsum,count);
        }
        return count;

    }
};