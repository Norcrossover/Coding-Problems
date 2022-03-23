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
        /*
        if (l1 && !l2) return l1;
        else if (!l1 && l2) return l2;
        else {
            ListNode * ret = new ListNode();
            ListNode * curr = ret;
            while ((l1) &&  (l2)) {
                if (l1) {
                    
                } 
                else if (l2) {
                    
                }
                if (l1->val < l2->val) {
                    cout << "l1->val < l2->val" << endl;
                    ret = new ListNode(l1->val);
                    //ret->val = l1->val;
                    l1 = l1->next;
                }
                else if (l1->val > l2->val) {
                    cout << "l1->val > l2->val" << endl;
                    ret = new ListNode(l2->val);
                    ret->val = l2->val;
                    l2 = l2->next;
                }
                l1 = l1->next;
                ret = ret->next;
            }
            return ret; 
        */
        /*
        ListNode * ret = new ListNode();
        if (l1 && !l2) return l1;
        else if (!l1 && l2) return l2;
        else if (!l1 && !l2) return nullptr;
        else {
            ListNode * ret = new ListNode();
            ListNode * curr = ret;
            while ((l1) || (l2)) {
                if (l1) {
                    if (l2) {
                        if (l1->val <= l2->val) {
                            curr->val = l1->val;
                            l1 = l1->next;
                        }
                        else {
                            curr->val = l2->val;
                            l2 = l2->next;
                        }
                    }
                    else {
                        curr->val = l1->val;
                        l1 = l1->next;
                    }
                    if (l1 || l2) {
                        curr->next = new ListNode();
                        curr = curr->next;
                    }
                }
                else {
                    if (l2) {
                        curr->val = l2->val;
                        l2 = l2->next;
                        if (l2) {
                            curr->next = new ListNode();
                            curr = curr->next;
                        }

                    }
                }
            }
            return ret; 
            */
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else {
            l2->next =  mergeTwoLists(l1, l2->next);
            return l2;
        }
        
    }
};