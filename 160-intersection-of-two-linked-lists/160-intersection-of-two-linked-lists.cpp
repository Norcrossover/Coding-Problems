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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> firstList;
        while (headA)
        {
            firstList.insert(make_pair(headA, headA->val));
            headA = headA->next;
        }
        
        while (headB)
        {
            if (firstList.find(headB) != firstList.end()) return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};