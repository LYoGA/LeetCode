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
        vector<vector<int> > levelOrder(TreeNode *root) {
            vector<vector<int> > ve;
            vector<int> tmp;
            queue<TreeNode*> q;
            TreeNode *p;
            if (root != NULL) {
                q.push(root);  
                int cur = 1, next = 0;
                while (!q.empty()) {
                    p = q.front(); 
                    q.pop();
                    cur--; 
                    tmp.push_back(p->val);
                    if (p->left != NULL) {
                        q.push(p->left);
                        next++;
                    }
                    if (p->right != NULL) {
                        q.push(p->right);
                        next++;
                    }
                    if (cur == 0) {
                        cur = next;
                        next = 0; 
                        ve.push_back(tmp); 
                        tmp.clear();
                    }
                }
            }
            return ve;
        }
};
