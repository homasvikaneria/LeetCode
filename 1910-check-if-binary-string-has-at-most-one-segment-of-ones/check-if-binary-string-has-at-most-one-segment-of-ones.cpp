// class Solution {
// public:
//     bool checkOnesSegment(string s) {
//         int firstOneIndex = -1;
//         bool zeroFound = false;

//         for(int i = 0; i < s.size(); i++) {
//             if(s[i] == '1') {
//                 if(firstOneIndex == -1) {
//                     firstOneIndex = i;
//                 }
//                 if(zeroFound) {
//                     return false;
//                 }
//             } 
//             else { 
//                 if(firstOneIndex != -1) {
//                     zeroFound = true;
//                 }
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool checkOnesSegment(string s) {
        int first = -1;
        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '1') {

                if(first == -1) {
                    first = i;   
                }
                else if(s[i-1] == '0') {
                    return false; 
                }
            }
        }
        return true;
    }
};