class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int last=-1;
        int seclast=-1;
        int curr=0;
        int total=0;
        int lastfruit=0;
        for(int i=0;i<fruits.size();i++){
            int fruit=fruits[i];
            if(fruit==last || fruit==seclast){
                curr++;
            }
            else{
                curr=lastfruit+1;
            }
            if(fruit==last){
                lastfruit++;
            }else{
                lastfruit=1;
                seclast=last;
                last=fruits[i];
            }
            total=max(total,curr);
        }
        return total;
    }
};