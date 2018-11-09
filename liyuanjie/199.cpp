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
        vector<int> rightSideView(TreeNode *root) {
            vector<int> ans;
            queue<TreeNode *> q; 
            q.push(root);
            int cur = 1, next = 0;
            while (!q.empty()) {
                TreeNode *tmp = q.front(); 
                q.pop(); 
                if (tmp->left != NULL) {
                    q.push(tmp->left); 
                    next++;
                }
                if (tmp->right != NULL) {
                    q.push(tmp->right); 
                    next++;
                }
                if (cur == 1) {
                    ans.push_back(tmp->val); 
                } 
                cur--;
                if (cur == 0) {
                    cur = next; 
                    next = 0;
                }
            }
            return ans;
        }
};
