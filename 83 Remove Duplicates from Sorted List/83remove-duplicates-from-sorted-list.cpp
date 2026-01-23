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
        if (head == NULL) return head;

        ListNode* temps = head;

        while(temps -> next != NULL){
            if (temps -> val == temps -> next -> val){
                ListNode* dup = temps->next;
                temps -> next = dup -> next;
                delete dup;
            }
            else{
                temps = temps-> next;
            }
        }
        return head;
    }
};