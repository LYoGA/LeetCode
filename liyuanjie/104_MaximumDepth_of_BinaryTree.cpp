/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    public:
        int maxDepth(TreeNode *root) {
            if (root == NULL) return 0;
            if (root->left == NULL && root->right == NULL) return 1;
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
            if (rightDepth == 0) return leftDepth + 1; 
            else if (leftDepth == 0) return rightDepth + 1; 
            else return max(leftDepth, rightDepth) + 1;
        }
};

