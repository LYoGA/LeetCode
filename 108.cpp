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
        TreeNode *Build(int left, int right, vector<int> &num) {
            if (left > right) return NULL;
            int mid = (left + right) / 2;
            TreeNode *root = new TreeNode(num[mid]);
            TreeNode *leftNode = Build(left, mid-1, num);
            TreeNode *rightNode = Build(mid+1, right, num);
            root->left = leftNode;
            root->right = rightNode;
            return root;
        }
        TreeNode *sortedArrayToBST(vector<int> &num) {
            int n = num.size();
            if (n == 0) return NULL;
            Build(0, n - 1, num);

        }
};
