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
        int findMax(TreeNode *root, int &Max) {
            int maxL, maxR;
            if (root == NULL) {
                return 0; 
            } 
            else {
                maxL = max(findMax(root->left, Max), 0);  
                maxR = max(findMax(root->right, Max), 0);  
                Max = max(Max, (maxL + root->val + maxR));
                return max(maxL, maxR) + root->val;   
            }  
        } 
        int maxPathSum(TreeNode *root) {
            if (root == NULL) return 0;
            int Max = INT_MIN;
            findMax(root, Max);
            return ans; 
        }
};
