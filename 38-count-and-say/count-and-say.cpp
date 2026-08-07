class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string ans="";
        string prev= countAndSay(n-1);
        for(int i=0;i<prev.size();i++){
            int cnt=1;
            while(i<prev.size() && prev[i]==prev[i+1]){
                cnt++;
                i++;
            }
            string temp= to_string(cnt);
            ans+=temp;
            ans+=prev[i];

        } 
        return ans;
    }
};