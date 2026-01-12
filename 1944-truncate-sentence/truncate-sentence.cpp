// class Solution {
// public:
//     string truncateSentence(string s, int k) {
//         int count = 0;

//         string res;
//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] == ' ') {
//                 count += 1;
//                 if (count == k) {
//                     break;
//                 }
//             }
//             res += s[i];
//         }
//         return res;
//     }
// };

class Solution {
public:
    string truncateSentence(string s, int k) {
        int c = 0;
        int ind;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == ' '){
                c++;
            }
            if(c==(k)){
                ind = i;
                s.erase(i);
                break;
            }
        }
        return s;
    }
};