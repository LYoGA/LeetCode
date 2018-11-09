/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
    public:
        void connect(TreeLinkNode *root) {
            queue<TreeLinkNode*> q;
            TreeLinkNode* p;
            if (root != NULL) {
                q.push(root);
                int cur = 1, next = 0;
                while (!q.empty()) {
                    p = q.front();
                    q.pop();
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
                        cur = next;
                        next = 0;
                        p->next = NULL;
                    } else {
                        p->next = q.front();
                    }
                }
            }
        }
};
