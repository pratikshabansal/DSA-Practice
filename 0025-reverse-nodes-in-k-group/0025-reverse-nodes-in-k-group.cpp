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
    ListNode* reverseKGroup(ListNode* head, int k) {
    if (head == NULL || k <= 1) return head;

    // Count k nodes ahead
    ListNode* temp = head;
    int count = 0;
    while (temp != NULL && count < k) {
       temp = temp->next;
       count++;
    }
    // If there are at least k nodes, then reverse
    if (count == k) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;
        int i = 0;
        while (curr != NULL && i < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            i++;
        }

        // Recursively call for the rest of the list
        head->next = reverseKGroup(curr, k);

        return prev; // new head after reversal
    }

    // Less than k nodes ? return as-is
    return head;
}
};

