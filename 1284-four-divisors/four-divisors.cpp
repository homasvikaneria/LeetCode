// class Solution {
// public:
//     int sumFourDivisors(vector<int>& nums) {
//         int totalSum = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             int num = nums[i];
//             int divisorCount = 0;
//             int divisorSum = 0;

//             for (int j = 1; j <= num; j++) {
//                 if (num % j == 0) {
//                     divisorCount++;
//                     divisorSum += j;
//                 }
//                 if (divisorCount > 4) {
//                     break;
//                 }
//             }
//             if (divisorCount == 4) {
//                 totalSum += divisorSum;
//             }
//         }
//         return totalSum;
        
//     }
// };


class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;

        // Iterate through each number in the nums array
        for (int num : nums) {
            int divisorCount = 0;
            int divisorSum = 0;

            // Loop through divisors up to sqrt(num)
            for (int j = 1; j <= sqrt(num); j++) {
                if (num % j == 0) {  // j is a divisor
                    divisorCount++;
                    divisorSum += j;

                    // Check if num / j is a different divisor
                    if (j != num / j) {
                        divisorCount++;
                        divisorSum += num / j;
                    }
                }

                // If more than 4 divisors, break early
                if (divisorCount > 4) {
                    break;
                }
            }

            // If there are exactly 4 divisors, add the sum of divisors to totalSum
            if (divisorCount == 4) {
                totalSum += divisorSum;
            }
        }

        return totalSum;
    }
};