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
    private:
        TreeNode *preNode;
    public:
        void pre(TreeNode *root) {
            if (root == NULL) return;
            TreeNode *lastRight = root->right;
            if (preNode) {
                preNode->left = NULL; 
                preNode->right = root;
            }
            preNode = root;
            pre(root->left);
            pre(lastRight);
        }
        void flatten(TreeNode *root) {
            preNode = NULL; 
            pre(root);
        }
};
