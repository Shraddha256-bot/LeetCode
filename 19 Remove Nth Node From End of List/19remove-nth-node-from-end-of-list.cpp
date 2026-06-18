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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 1;
        ListNode* temp = head;

        while(temp-> next != NULL){
            count++;
            temp = temp->next;
        }

        if(count == n){
            return head->next;
        }

        temp = head;
        int num = count - n - 1;

        

        while(num>0){
                temp = temp->next;
            num--;
        }

        temp->next = temp->next->next;

        return head;
    }
};