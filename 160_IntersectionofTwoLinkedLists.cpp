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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            if (headA == NULL || headB == NULL) return NULL; 
            ListNode *curA = headA;
            ListNode *curB = headB;
            int lenA = 1;
            while (headA->next != NULL) {
                headA = headA->next; 
                lenA++;
            } 
            int lenB = 1;
            while (headB->next != NULL) {
                headB = headB->next; 
                lenB++;
            } 
            if (headA != headB) return NULL;            

            int d = 0;
            if (lenA >= lenB) {
                d = lenA - lenB; 
                while (d--) curA = curA->next;  
            } 
            else {
                d = lenB - lenA; 
                while (d--) curB = curB->next; 
            }
            while (curA != curB) {
                curA = curA->next; 
                curB = curB->next; 
            }
            return curA;
        }
};
