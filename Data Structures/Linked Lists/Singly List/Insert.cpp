//Linked Lists: Insert a node at a specific position
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *d = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp, *curr = head;
    for(int i = 0; i < position - 1; i++)
        curr = curr->next;

    temp = curr;
    curr = temp->next;
    temp->next = d;
    d->next = curr;

    return head;
}

//Insert a node at the head
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *curr;
    curr = new SinglyLinkedListNode(data);
    curr->next = head;
    head = curr;
    return head;
    
 /*This also works -- another way in doing it
    if(head == NULL)
    {
        curr = new SinglyLinkedListNode(data);
        curr->next = head;
        head = curr;
        return head;
    }
    else
    {
        curr = new SinglyLinkedListNode(data);
        curr->next = head;
        head = curr;
        
        return head;
    }
*/
}

//Insert a node at the tail
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *curr = head; 
    
    if(curr == NULL)
    {
        curr = new SinglyLinkedListNode(data);
        return curr;
    }
    else
    {
        while(curr->next != NULL)
            curr = curr->next;
    
        curr->next = new SinglyLinkedListNode(data);
        return head;
    }

}
