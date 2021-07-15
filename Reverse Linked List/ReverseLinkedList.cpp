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
        //cout << "count: " << count << endl;

        int max = count;
        for (int j = 0; j < max; j++) {                  // Iterate through the whole list
            for (int i = 0; i < count; i++) {            // Iterate up till the count number to find the node
                if (i == max) {                          // This may be redundant if count counts the max variablee
                    revList->val = head->val;            // set the current node's val to the current head node's val
                    revList = revList->next;             // iterate to the next node

                }
                else if (i == count) {                   // if i is count
                    revList->val = head->val;            // set the value of head to the value of the current node in the reversed list
                    revList = revList->next;             // iterate to the next node

                }
                head = head->next;                       // continue iterating
            }
                count--;                                 // decrement the node value to reverse the list
        }   
        counter = revList;                               // temporary node to traverse and check if it worked
        while (counter->next != nullptr) {
            if (revList != nullptr) {
            cout << revList->val << endl;
            }
            revList = revList->next;
        }
        return revList;
    }
};