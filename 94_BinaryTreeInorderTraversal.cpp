/* struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
        vector<int> inorderTraversal(TreeNode *root) {
            stack<TreeNode*> Stack;
            vector<int> tmp;
            if (root == NULL) return tmp;
            else {
                while (root != NULL || !Stack.empty()) {
                    while (root != NULL) {
                        Stack.push(root);
                        root = root->left;
                    }
                    if (!Stack.empty()) {
                        root = Stack.top();
                        Stack.pop();
                        tmp.push_back(root->val);
                        root = root->right;
                    }
                }
            }
            return tmp;
        }
};
