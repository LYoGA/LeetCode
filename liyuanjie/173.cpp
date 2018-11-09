/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    private:
        stack<TreeNode*> s;
    public:
        BSTIterator(TreeNode *root) {
            while (!s.empty()) s.pop(); //清空栈

            while (root) {
                s.push(root); 
                root = root->left;
            }
        }

        /** @return whether we have a next smallest number */
        bool hasNext() {
            if (!s.empty()) return true; 
            return false;
        }

        /** @return the next smallest number */
        int next() {
            TreeNode *tmp = s.top();
            s.pop();
            int Min = tmp->val;
            tmp = tmp->right; 
            while (tmp) {
                s.push(tmp); 
                tmp = tmp->left;
            }
            return Min;
        }

};



/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
