class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dup = head;
      
        while(dup!=NULL){
            if((dup->next!=NULL)&&(dup->val == dup->next->val)){
                ListNode* temp = head -> next;
                dup->next == dup->next->next;
                temp -> next == NULL;
                delete temp;
            }
            else{
                dup = dup -> next;
            }
        }
        return head;
    }
};
