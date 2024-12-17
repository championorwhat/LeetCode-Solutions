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
    int length(ListNode* head) {
        vector<int> v;
        while (head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        return v.size();
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        if (n == len) {
            return head->next;
        }
        ListNode* temp = head;
        for (int i = 1; i < len - n; i++) {
            temp = temp->next;
        }
        if (temp->next != NULL) {
            temp->next = temp->next->next;
        }

        return head;
    }
};
