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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* nhead = new ListNode(-1);
        ListNode* tmp = nhead;
        while (l1 != NULL || l2 != NULL)
        {
            if (l1 == NULL) {
                nhead->next = l2;
                break;
            }
            else if (l2 == NULL) {
                nhead->next = l1;
                break;
            }
            else {
                if (l1->val < l2->val) {
                    nhead->next = new ListNode(l1->val);
                    l1 = l1->next;
                }
                else {
                    nhead->next = new ListNode(l2->val);
                    l2 = l2->next;
                }
            }
            nhead = nhead->next;
        }
        return tmp->next;
    }
};