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
        vector<int> preorderTraversal(TreeNode *root) {
            stack<TreeNode*> Stack;
            vector<int> tmp;
            if (root == NULL) return tmp;
            else {
                while (root != NULL || !Stack.empty()) {
                    while (root != NULL) {
                        Stack.push(root);
                        tmp.push_back(root->val);
                        root = root->left;
                    }
                    root = Stack.top();
                    Stack.pop();
                    root = root->right;
                }
            }
            return tmp;
        }
};
