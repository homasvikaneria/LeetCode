class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int > dictionary ;
        for(int i=0;i<magazine.length();i++){
            dictionary[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(dictionary[ransomNote [i]]==0){
                return false;
            }
            dictionary[ransomNote[i]]--;
        }
        return true;
    }
};