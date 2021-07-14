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
    ListNode* reverseList(ListNode* head) {
        /*          Iterative approach
        set a counter to find out how many nodes there are by traversing the list
        go through the list n times
            for the length of the list traverse to the counter
                set the current node to head if the counter == 



                    Recursive approach

        */
        ListNode* revList = new ListNode; // new reversed list
        ListNode* counter = head;
        int count = 0;
        while (counter) {
            count++;
            counter = counter->next;
        }
        int max = count;
        for (int i = 0; i < max; i++) {
            
        }
    }
};