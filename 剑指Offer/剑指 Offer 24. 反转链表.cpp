class Solution {
private:
    ListNode* reverse(ListNode* curr, ListNode* prev) {
        if (curr == NULL) return prev;
        ListNode* res = reverse(curr->next, curr);
        curr->next = prev;
        return res;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return reverse(head, NULL);
    }
};