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
        TreeNode *build(vector<int> &postorder, int pb, int pe, vector<int> &inorder, int ib, int ie) {
            if (ib > ie) {
                return NULL; 
            } 
            int val = postorder[pe];
            int index;
            for (int i = ib; i <= ie; i++) {
                if (inorder[i] == val) {
                    index = i; 
                    break;
                } 
            }
            int len = index - ib;
            TreeNode *root = new TreeNode(val);
            root->left = build(postorder, pb, pb+len-1, inorder, ib, index-1);
            root->right = build(postorder, pb+len, pe-1, inorder, index+1, ie);
            return root;
        
        }
        TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
            if (postorder.size() == 0) return NULL; 
            return build(postorder, 0, postorder.size()-1, inorder, 0, inorder.size()-1);
        }
};
