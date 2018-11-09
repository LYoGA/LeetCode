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
        ListNode *merge(ListNode* l1, ListNode* l2) {
            if (l1 == NULL) return l1;  
            if (l2 == NULL) return l2;  

            ListNode *head, *tmp;

            if (l1->val < l2->val) {//确定头结点
                head = l1; 
                l1 = l1->next;
            } else {
                head = l2; 
                l2 = l2->next; 
            }

            tmp = head;
            while (l1 != NULL && l2 != NULL) {
                if (l1->val < l2->val) {
                    tmp->next = l1; 
                    tmp = l1;
                    l1 = l1->next;
                } else {
                    tmp->next = l2; 
                    tmp = l2; 
                    l2 = l2->next;
                }
            }
            if (l1 != NULL) tmp->next = l1;
            if (l2 != NULL) tmp->next = l2;

            return head;
        }

        ListNode *sortList(ListNode *head) {
            if (head == NULL || head->next == NULL) return head;
            ListNode* fast = head;
            ListNode* slow = head;
            while (fast->next != NULL && fast->next->next != NULL) {//快慢指针得到中间结点
                fast = fast->next->next;
                slow = slow->next; 
            }

            ListNode* mid = slow->next;
            slow->next = NULL;

            ListNode* list1 = sortList(head);
            ListNode* list2 = sortList(mid);

            ListNode* result = merge(list1, list2);//递归合并链表
            
            return result;
        }
};
