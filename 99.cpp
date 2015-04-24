class Solution {
    public:
        void maintain(TreeNode* u) {
            pre = next;
            next = u;
            if (pre != NULL && pre->val > next->val) {
                if (L == NULL) {
                    L = pre;
                }
                R = next;
            }
        }
        void inorderTree(TreeNode *root) {
            if (root->left != NULL) {
                inorderTree(root->left);
            }

            maintain(root);

            if (root->right != NULL) {
                inorderTree(root->right);
            }
        }

        void recoverTree(TreeNode *root) {
            pre = next = L = R = NULL;
            inorderTree(root);
            swap(L->val, R->val);
        }
    protected:
        TreeNode* pre;
        TreeNode* next;
        TreeNode* L;
        TreeNode* R;
};
