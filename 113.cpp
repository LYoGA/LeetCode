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
        void find(vector<vector<int> > &ans, vector<int> &tmp, TreeNode *root, int sum, int cur) {
            tmp.push_back(root->val);
            if (cur == sum && root->left == NULL && root->right == NULL) {
                ans.push_back(tmp);
                return;
            }
            if (root->left != NULL) {
                find(ans, tmp, root->left, sum, cur + root->left->val);
                tmp.pop_back();
            }
            if (root->right != NULL) {
                find(ans, tmp, root->right, sum, cur + root->right->val);
                tmp.pop_back();
            }
            return;
        }
        vector<vector<int> > pathSum(TreeNode *root, int sum) {
            vector<vector<int> > ans;
            vector<int> tmp;
            if (root != NULL) {
                find(ans, tmp, root, sum, root->val);
            }
            return ans;
        }
};
