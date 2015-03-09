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
        int sum;
        void countSum(TreeNode *root, int num) {
            if (root->left == NULL && root->right == NULL) sum += num;
            if (root->left != NULL) countSum(root->left, num * 10 + root->left->val);
            if (root->right != NULL) countSum(root->right, num * 10 + root->right->val);
        }
        int sumNumbers(TreeNode *root) {
            if (root == NULL) return 0;
            sum = 0;
            countSum(root, root->val);
            return sum;
        }
};
