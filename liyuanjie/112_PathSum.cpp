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
        void dfs(TreeNode *root,  int sum, int& flag) {
            if (root == NULL || flag) return;   
            if (root->left == NULL && root->right == NULL && sum == root->val) {
                flag = 1; 
                return;
            }
            dfs(root->left, sum - root->val, flag);
            dfs(root->right, sum - root->val, flag);
        }
        bool hasPathSum(TreeNode *root, int sum) {
            int flag = 0;
            dfs(root, sum, flag);
            if (flag) return true;
            else return false;
        }
};
