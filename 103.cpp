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
        vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
            vector<vector<int> > ans;
            vector<int> tmp;
            queue<TreeNode*> q;
            if (root != NULL) {
                q.push(root);
                int cur = 1, next = 0, num = 0;
                while (!q.empty()) {
                    TreeNode *p = q.front();
                    q.pop();
                    tmp.push_back(p->val);
                    cur--;
                    if (p->left != NULL) {
                        q.push(p->left);
                        next++;
                    }
                    if (p->right != NULL) {
                        q.push(p->right);
                        next++;
                    }
                    if (cur == 0) {
                        if (num%2 == 1) reverse(tmp.begin(), tmp.end());
                        num++;
                        ans.push_back(tmp);
                        tmp.clear();
                        cur = next;
                        next = 0;
                    }
                }
            }
            return ans;
        }
};
