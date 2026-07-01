/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode();
        ListNode* even = new ListNode();
        ListNode* curr = head;
        ListNode* co = odd;
        ListNode* ce = even;
        while (curr!=nullptr) {
            co->next = new ListNode (curr->val);
            co = co->next;
            curr = curr->next;
            if (curr==nullptr) break;
            ce->next = new ListNode (curr->val);
            ce = ce->next;
            curr = curr->next;
        }
        odd = odd->next;
        even = even->next;
        ListNode* newHead = odd;
        curr = newHead;
        if (curr==nullptr) return newHead;
        while (curr->next!=nullptr) {
            curr = curr->next;
        }
        curr->next = even;
        return newHead;
    }
};