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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* t = head;
        int all = 1;
        while (head)
        {
            head = head->next;
            all++;
        }
        head = t;
        for (int i = 1; i < all-k; i++)
        {
            head = head->next;
        }
        return head;
    }
};