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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 != nullptr && l2 == nullptr) return l1;
        else if (l1 == nullptr && l2 != nullptr) return l2;
        else {
            ListNode * curr1 = l1;
            ListNode * curr2 = l2;
            ListNode * ret = new ListNode();
            
            while (curr1 && curr2) {
                if (curr1->val < curr2->val) {
                    ret->val = curr1->val;
                }
                else if (curr1->val > curr2->val) {
                    ret->val = curr2->val;
                }
                curr1 = curr1->next;
                ret = ret->next;
            }
            return ret;
        }
    }
};