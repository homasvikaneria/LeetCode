class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        int i=0;
        for(int k=0;k<word.length();k++){
            if(word[k]==ch){
                j=k;
                break;
            }
        }
        
        while(i<j){
            swap(word[i],word[j]);
            i++;
            j--;
            // cout<<j<<" ";
        }
        return word;
    }
};