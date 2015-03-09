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
        ListNode *swapPairs(ListNode *head) {
            if (head == NULL || head->next == NULL) return head;
            ListNode *cur, *ret, *tmp;
            cur = head;
            ret = cur->next;
            head = ret;
            tmp = cur;
            while (cur && ret) {
                tmp->next = ret;
                cur->next = ret->next;
                ret->next = cur;
                tmp = cur;
                cur = cur->next;
                if (cur != NULL) ret = cur->next;
            }
            return head;
        }
};
