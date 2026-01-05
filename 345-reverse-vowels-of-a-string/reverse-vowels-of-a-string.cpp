// class Solution {
// public:
//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.length() - 1;
//         unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//         while(i<j){
//             if(vowels.find(s[i])==vowels.end()){
//                 i++;
//                 continue;
//             }
//             if(vowels.find(s[j])==vowels.end()){
//                 j--;
//                 continue;
//             }
//                         swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//         return s;

//     }
// };

class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            bool f = false;
            bool g = false;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') f = true;
             if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') f = true;
            
              if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') g  = true;
               if(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U') g = true;
            
            if(f && g){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!f) i++;
            if(!g) j--;
            
            
        }
        return s;
    }
};