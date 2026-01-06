/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 1; 
        if (root == nullptr) {
            return 0; 
        }
        queue<TreeNode*> Q;
        Q.push(root);
        int maxSum = root->val;  
        int levelWithMaxSum = 1; 
                  
        while (!Q.empty()) {
            int levelSize = Q.size();  
            int levelSum = 0;          
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* curr = Q.front();
                Q.pop();
                levelSum += curr->val; 
                if (curr->left) Q.push(curr->left);
                if (curr->right) Q.push(curr->right);
            }
            if (levelSum > maxSum) {
                maxSum = levelSum;
                levelWithMaxSum = level;
            }
            level++;  
        }
        return levelWithMaxSum; 
    }
};
