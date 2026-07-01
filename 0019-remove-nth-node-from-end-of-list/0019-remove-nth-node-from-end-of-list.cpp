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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = head;
        int size = 0;
        if (curr->next==nullptr) return nullptr; 
        while (curr!=nullptr) {
            size++;
            curr = curr->next;
        }
        if (n==size) return head->next;
        int x = size-n;
        curr = head;
        for (int i=0; i<x-1; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};