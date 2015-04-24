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
        bool check(TreeNode *root, long &v) {
            if (root == NULL) return true; 
            if (!check(root->left, v)) return false;
            if (v >= root->val) return false;
            v = root->val;
            if (!check(root->right, v)) return false;
            return true;
        }
        bool isValidBST(TreeNode *root) {
            long v = LONG_MIN;
            return isValidBSTHelper(root, v);
        }
};

