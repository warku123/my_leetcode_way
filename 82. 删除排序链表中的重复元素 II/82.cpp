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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }
        
        ListNode* res = new ListNode(0, head);

        ListNode* cur = res;
        while (cur->next && cur->next->next) {
            if (cur->next->val == cur->next->next->val) {
                int tmp = cur->next->val;
                while (cur->next && cur->next->val == tmp) {
                    cur->next = cur->next->next;
                }
            }
            else {
                cur = cur->next;
            }
        }

        return res->next;
    }
};