class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *next = NULL;
        ListNode *temp = head;
        while(head!=NULL){
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            prev = next;    
        }
        return prev;
    }
};