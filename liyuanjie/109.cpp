/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
        int len(ListNode *head) {
            int l = 0;
            while (head != NULL) {
                l++;
                head = head->next;
            }
            return l;
        }
        TreeNode *Build(int left, int right, ListNode *head) {
            if (left > right) return NULL;
            int mid = (left+right)/2;

            ListNode *p = head;
            for (int i = left; i < mid; i++) p = p->next;
            TreeNode *root = new TreeNode(p->val);
            TreeNode *leftNode = Build(left, mid-1, head);
            TreeNode *rightNode = Build(mid+1, right, p->next);

            root->left = leftNode;
            root->right = rightNode;
            return root;
        }
        TreeNode *sortedListToBST(ListNode *head) {
            if (head == NULL) return NULL;
            int l = len(head);
            Build(0, l-1, head);
        }
};
