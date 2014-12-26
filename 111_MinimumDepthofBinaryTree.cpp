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
        int minDepth(TreeNode *root) {
            if (root == NULL) return 0;
            if (root->left == NULL && root->right == NULL) return 1;
            int leftDepth = minDepth(root->left);
            int rightDepth = minDepth(root->right);
            if (rightDepth == 0) return leftDepth + 1; 
            else if (leftDepth == 0) return rightDepth + 1; 
            else return min(leftDepth, rightDepth) + 1;
        }
};


class Solution {
    public:
        void dfs(TreeNode *root, int cur, int &d) {
            if (root->left == NULL && root->right == NULL) {
                if (cur < d) {
                    d = cur; 
                    return;
                }
            }
            if (root->left != NULL) 
                dfs(root->left, cur + 1, d);
            if (root->right != NULL) 
                dfs(root->right, cur + 1, d);
        }
        int minDepth(TreeNode *root) {
            int d = 999999999;     
            int cur = 1;
            if (root != NULL) {
                dfs(root, cur, d);
                return d;
            }
            else return 0;
        }
};
