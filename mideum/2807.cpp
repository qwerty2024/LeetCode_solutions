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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head->next;
        ListNode* prev = head;

        while (curr) {
            ListNode *new_node = new ListNode(gcd(curr->val, prev->val), curr);
            prev->next = new_node;

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};