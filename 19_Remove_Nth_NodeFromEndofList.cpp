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
        ListNode *removeNthFromEnd(ListNode *head, int n) {
            int len = 0; 
            ListNode *tmp = head;
            while (tmp) {
                len++; 
                tmp = tmp->next;
            }
            if (n == len) {
                head = head->next;  
            }
            else {
                tmp = head; 
                len = len - n - 1;
                while (len--) {
                    tmp = tmp->next; 
                }
                tmp->next = tmp->next->next; 
            }
            return head;
        }
};
