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
    ListNode* deleteNode(ListNode* head, int val) {
        
        if (head->val == val) return head->next;
        ListNode* t = head;
        while (head->next)
        {
            if (head->next->val == val) {
                head->next = head->next->next;
                break;
            }
            head = head->next;
        }
        return t;
    }
};