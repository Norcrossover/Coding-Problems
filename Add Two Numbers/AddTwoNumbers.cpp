/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 solution pseudo code:
 create two list pointers
 create a new linked list
 traverse both lists simultaneosly if the lists aren't empty{
    check for null ptrs; if null
        set curr val to zero
    add current pointers to pointer in new list
    go to the next pointer in each list
 }
 return new list
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * curr1 = l1;
        ListNode * curr2 = l2;
        ListNode * ret;
        int val = 0, counter = 0;
        
        while ((curr1 != nullptr) && (curr2 != nullptr)) {
            val = (curr1->val + curr2->val);
            cout << curr1->val << " " << curr2->val;
            cout << val;
            ret = ret->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
            counter++;
        }
            cout << endl << counter;
            return ret;
    }
};