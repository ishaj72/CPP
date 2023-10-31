int fractional_node(struct Node *head, int k)
{
    int len =0 ;
    Node *ptr = head;
    while (head!=NULL){
        if(ptr->next!=NULL and len!=0 and len%k==0){
            ptr = ptr->next;
        }
        len++;
        head= head->next;
    }
    return ptr->data;
}
