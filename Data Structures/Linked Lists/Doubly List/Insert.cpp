//Insert a node into a sorted Doubly Linked List
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *insert = new DoublyLinkedListNode(data);
    DoublyLinkedListNode *current, *temp;
    
    if(head == NULL)//if list is empty
        head = insert;
    else if (head->data >= insert->data) //if data in head >= new data
    {
        insert->next = head;
        head->prev = insert;
        head = head->prev;
    }
    else //in the middle of the list
    {
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
		
        /* works for cases where only one data needs to be inserted
        current = head;
        while(current != NULL)
        {
            if(current->data >= insert->data) //if current data >= new data
            {
                DoublyLinkedListNode *p = current->prev;
                p->next = insert;
                insert->prev = p;
                
                insert->next = current;
                current->prev = insert;
            }
            temp = current;
            current = current->next;
        }
        
        //temp = current->prev;
        if(temp->data <= insert->data) //if data at the tail end <= new data
        {
            temp->next = insert;
            insert->prev = temp;
            insert->next = nullptr;
        } 
        */
    }
    return head;
}
