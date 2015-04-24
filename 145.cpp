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
        void pDfs(TreeNode *root, vector<int> &ans) {
            if (root == NULL) {
                return;
            } else {
                pDfs(root->left, ans); 
                pDfs(root->right, ans);  
                ans.push_back(root->val);
            } 
             
        }
        vector<int> postorderTraversal(TreeNode *root) {
            vector<int> ans;
            pDfs(root, ans);
            return ans;
        }
};
