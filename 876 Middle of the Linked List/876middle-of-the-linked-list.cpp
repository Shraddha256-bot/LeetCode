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
    ListNode* middleNode(ListNode* head) {
        ListNode* tp = head;
        int len = 0;
        int t;
        while(tp != NULL){
            len++;
            tp = tp -> next;
        }
        t = len/2;
        int c = 0;
        ListNode* temp = head;
        while(temp != NULL){
            if (c == t){
                return temp;
            }
            temp = temp->next;
            c++;
        }
        return head;
        
    }
};