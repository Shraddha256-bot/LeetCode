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
    void deleteNode(ListNode* node) {
        node-> val = node->next-> val;
        node-> next = node->next->next;

       /* while(curr-> val != node){
            curr = curr->next;
        }

        if(curr-> val == node){
            curr -> next = curr -> next -> next;
        }

        return curr;
        */
    }
};