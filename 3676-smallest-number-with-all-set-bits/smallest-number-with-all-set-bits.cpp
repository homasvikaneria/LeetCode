// class Solution {
// public:
//     int smallestNumber(int n) {
//         bitset<16> b(n);

//         int highestbit=15;
//         while(highestbit>0 && b[highestbit]==0){
//             highestbit--;
//         }
//         int count=0;
//         for(int i=0;i<=highestbit;i++){
//             if(b[i]==0){
//                 b[i]=1;
//             }
//             count++;
//         }
//         return (1 << count)-1; // 1 << count==== 2 ki power count
//     }
// };

class Solution {
public:
    int smallestNumber(int n) {
        int ans=1;
        while(ans<=n){
            ans=ans<<1;
        }
        return ans-1;
    }
};


// class Solution {
// public:
//     int smallestNumber(int n) {
//         int count = 0;
//         while( n > 0){
//             count++;
//             n /= 2;
//         }
//         return pow(2 , count) - 1;
//     }
// };