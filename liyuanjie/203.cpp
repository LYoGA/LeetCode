class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            if (head == NULL) return NULL;
            ListNode* first = new ListNode(0);
            first->next = head;
            ListNode* pre = first;

            while (pre->next) {
                if (pre->next->val == val) {
                    pre->next = pre->next->next;
                }
                else {
                    pre = pre->next;
                }
            }
            pre = first->next;
            delete first;
            return pre;
        }
};
