// iinsert at the middle 
Node* insertInMiddle(Node* head, int x) {
    if (head == nullptr) {
        return new Node(x);
    }

    Node* slow = head; 
    Node* fast = head;  

    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* new_node = new Node(x);
    new_node->next = slow->next;
    slow->next = new_node;

    return head;
}
