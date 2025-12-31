// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int> set1(nums1.begin(), nums1.end());
//         set<int> set2(nums2.begin(), nums2.end());
//         vector<int> common;

//         for (int element : set1) {
//             if (set2.count(element)) {
//                 common.push_back(element);
//             }
//         }

//         return common;
//     }
// };

#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Use sets to handle duplicates automatically
        std::set<int> set1(nums1.begin(), nums1.end());
        std::set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> common;
        // std::inserter is an iterator that inserts elements into the back of a container
        std::set_intersection(set1.begin(), set1.end(),
                              set2.begin(), set2.end(),
                              std::back_inserter(common));

        return common;
    }
};
