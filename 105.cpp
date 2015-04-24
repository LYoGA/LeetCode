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
        TreeNode *buildTree(vector<int> &preorder, int pb, int pe, vector<int> &inorder, int ib, int ie) {
            if (ps > pe) {
                return NULL; 
            }  
            int val = preorder[pb];
            int index;
            for (int i = ib; i <= ie; i++) {
                if (inorder[i] == val) {
                    index = i; 
                    break;
                } 
            }
            int len = index - ib;
            TreeNode *root = new TreeNode(val);
            root->left = buildTree(preorder, pb+1, pb+len, inorder, ib, index-1);
            root->right = buildTree(preorder, pb+len+1, pe, inorder, index+1, ie);
            return root;
        }
        TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
            if (preorder.size() == 0) return NULL;
            return buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
        }
};
