// class Solution {
// public:
//     string restoreString(string s, vector<int>& indices) {
//         string result (s.size(), ' ');
//         for(int i=0;i<indices.size();i++){
//             result[indices[i]] = s[i];
//         }

//        return result; 
//     }
// };

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string ans(n,'.');
        for(int i=0;i<n;i++){
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};