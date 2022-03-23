//Get Node position from tail
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *curr = head;
    int count = 0, value;
    while(curr != NULL)
    {
        curr=curr->next;
        count++;
    }
    
    curr = head;
    for(int i = 0; i < (count - positionFromTail) - 1; i++)
        curr = curr->next;
        
    value = curr->data;
    return value;
}

//Find the merge point of two joined lists
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *current1 = head1;
    SinglyLinkedListNode *current2 = head2;
    
    while(current1 != current2)
    {
        if(current1->next == NULL)
            current1 = head1;
        else    
            current1 = current1->next;
        
        if(current2->next == NULL)
            current2 = head2;
        else
            current2 = current2->next;
    }
    return current1->data;
}
