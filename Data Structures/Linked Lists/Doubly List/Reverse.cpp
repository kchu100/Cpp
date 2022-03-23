//Reverse Doubly Linked List
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    if(head == NULL)
        return head;
    else
    {
        DoublyLinkedListNode *current = head, *p;
        while(current != NULL)
        {
            p = current->prev;
            current->prev = current->next;
            current->next = p;
            current = current->prev;
        }
		
		if(p != NULL)
			head = p->prev;
        return head;
    }
    
}
