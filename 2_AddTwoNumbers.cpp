/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
            if (l1 == NULL) return l2;
            if (l2 == NULL) return l1;
            ListNode *head = new ListNode(0);
            ListNode *cur = head;
            int num = 0;
            while (l1 != NULL || l2 != NULL) {
                int v1 = 0, v2 = 0;
                if (l1 != NULL) v1 = l1->val;
                if (l2 != NULL) v2 = l2->val;
                int tmp = v1 + v2 + num; 
                num = 0;
                if (tmp > 9) {
                    num = tmp / 10; 
                    tmp %= 10;
                }
                ListNode *p = new ListNode(tmp);
                cur->next = p;
                cur = cur->next;
                if (l1 != NULL) l1 = l1->next;
                if (l2 != NULL) l2 = l2->next;
            }
            if (num != 0) {
                ListNode *p = new ListNode(num);
                cur->next = p;
            }

            return head->next;
        }
};
